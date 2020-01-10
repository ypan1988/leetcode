#include <cstddef>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

void PrintList(ListNode *ln);

class Solution {
 public:
  ListNode *insertionSortList(ListNode *head) {
    if (!head) return head;

    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *prev_i = head;
    ListNode *i = head->next;
    ListNode *next_i;

    while (i) {
      next_i = i->next;

      ListNode *prev_j = dummy;
      ListNode *j = dummy->next;
      while (j != i && j->val < i->val) {
        prev_j = j;
        j = j->next;
      }
      if (j == i) {
        prev_i = i;
      } else {
        prev_i->next = i->next;
        prev_j->next = i;
        i->next = j;
      }

      i = next_i;
    }
    return dummy->next;
  }
};