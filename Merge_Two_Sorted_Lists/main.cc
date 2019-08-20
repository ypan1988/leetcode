#include <iostream>
#include "solution.h"

using namespace std;

ListNode *create_linkedlist(std::initializer_list<int> lst) {
  auto iter = lst.begin();
  ListNode *head = lst.size() ? new ListNode(*iter++) : NULL;
  for (ListNode *cur = head; iter != lst.end(); cur = cur->next)
    cur->next = new ListNode(*iter++);
  return head;
}

int main() {
  Solution s;
  ListNode *l1 = create_linkedlist({1, 2, 4});
  ListNode *l2 = create_linkedlist({1, 3, 4});
  ListNode *ret = s.mergeTwoLists(l1, l2);
  for (ListNode *cur = ret; cur; cur = cur->next) cout << cur->val << "->";
  cout << "\b\b  " << endl;

  return 0;
}
