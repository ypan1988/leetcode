#include <cstddef>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode *sortList(ListNode *head) {
    if (head == NULL || head->next == NULL) return head;

    ListNode *slow = head, *fast = head;
    ListNode *prev_slow;
    while (fast != NULL && fast->next != NULL) {
      prev_slow = slow;
      slow = slow->next;
      fast = fast->next->next;
    }
    prev_slow->next = NULL;

    ListNode *l1 = sortList(head);
    ListNode *l2 = sortList(slow);

    return merge(l1, l2);
  }

  ListNode *merge(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode(0);
    ListNode *curr = dummy;
    while (l1 != NULL || l2 != NULL) {
      if (l1 == NULL) {
        curr->next = l2;
        break;
      } else if (l2 == NULL) {
        curr->next = l1;
        break;
      } else if (l2->val < l1->val) {
        curr->next = l2;
        l2 = l2->next;
        curr = curr->next;
        curr->next = NULL;
      } else {
        curr->next = l1;
        l1 = l1->next;
        curr = curr->next;
        curr->next = NULL;
      }
    }

    return dummy->next;
  }
};