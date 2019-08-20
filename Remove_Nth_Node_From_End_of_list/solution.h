#include <cstddef>
#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *iter1 = head;
    ListNode *iter2 = head;
    ListNode *iter2_pred = head;

    for (int i = 0; i < n; ++i) {
      iter1 = iter1->next;
    }

    while (iter1 != NULL) {
      iter1 = iter1->next;

      iter2_pred = iter2;
      iter2 = iter2->next;
    }

    if (iter2 == head)
      head = head->next;
    else
      iter2_pred->next = iter2->next;

    return head;
  }
};
