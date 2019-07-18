#include <cstddef>

struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode *res = new ListNode(0);
    ListNode *tail = res;

    while (head) {
      int curr_val = head->val;
      head = head->next;

      tail->next = new ListNode(curr_val);
      tail = tail->next;

      while (head && head->val == curr_val) {
	head = head->next;
      }
    }

    tail->next = NULL;
    tail = tail->next;

    return res->next;
  }
};
