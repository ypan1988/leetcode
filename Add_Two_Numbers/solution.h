#include <cstddef>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *res = new ListNode(0);
      ListNode *pl = res;
      int sum = 0, extra = 0;
      while (l1 || l2 || extra) {
	int val1 = l1 ? l1->val : 0;
	int val2 = l2 ? l2->val : 0;
	sum = val1 + val2 + extra;
	
	extra = sum / 10;
	pl->next = new ListNode(sum % 10);
	pl = pl->next;
	
	l1 = l1 ? l1->next : NULL;
	l2 = l2 ? l2->next : NULL;
      }
      return res->next;
    }
};
