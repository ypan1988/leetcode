#include <cstddef>

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* res = new ListNode(0);
    ListNode* pl = res;
    while (l1 || l2) {
      int val;
      if (l1 && l2) {
        if (l1->val <= l2->val) {
          val = l1->val;
          l1 = l1->next;
        } else {
          val = l2->val;
          l2 = l2->next;
        }
      } else if (l1) {
        val = l1->val;
        l1 = l1->next;
      } else {
        val = l2->val;
        l2 = l2->next;
      }

      pl->next = new ListNode(val);
      pl = pl->next;
    }
    return res->next;
  }
};
