#include <cstddef>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      ListNode *res = new ListNode(0);
      ListNode *pl = res;
      while(head && head->next) {
	pl->next = new ListNode(head->next->val);
	pl = pl->next;

	pl->next = new ListNode(head->val);
	pl = pl->next;

	head = head->next->next;
      }

      if (head) {
	pl->next = new ListNode(head->val);
	pl = pl->next;
      }

      return res->next;
    }
};
