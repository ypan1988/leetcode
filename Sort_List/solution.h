// Insertion sort, too slow!!!

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode *sortList(ListNode *head) {
    ListNode *dummy = new ListNode(0), *curr;
    while (head) {
      ListNode *tmp = head->next;

      curr = dummy;
      while (curr->next && curr->next->val < head->val) {
        curr = curr->next;
      }
      head->next = curr->next;
      curr->next = head;

      head = tmp;
    }

    return dummy->next;
  }
};