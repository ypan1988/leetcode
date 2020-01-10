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
      ListNode *dummy = new ListNode(-1), *curr;

      while(head) {
          ListNode *tmp = head->next;      
          curr = dummy;
          while(curr->next && curr->next->val < head->val) {
              curr = curr->next;
          }
          head->next = curr->next;
          curr->next = head;
          head = tmp;
      }

      return dummy->next;
  }
};