#include <cstddef>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (!head) return head;

    ListNode *l1 = head, *l2;
    int count = 0;
    while (l1) {
      ++count;
      l1 = l1->next;
    }
    k = k % count;

    l1 = head;
    l2 = head;
    for (int i = 0; i < k; ++i) {
      l2 = l2->next;
    }
    while (l2) {
      l1 = l1->next;
      l2 = l2->next;
    }

    ListNode *res = new ListNode(0);
    ListNode *ln = res;

    while (l1) {
      ln->next = new ListNode(l1->val);
      ln = ln->next;
      l1 = l1->next;
    }
    ListNode *l3 = head;
    for (int i = 0; i < (count-k); ++i) {
      ln->next = new ListNode(l3->val);
      ln = ln->next;
      l3 = l3->next;
    }

    ln->next = NULL;
    ln = ln->next;

    return res->next;
  }
};
