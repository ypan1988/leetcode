#include <initializer_list>
#include <iostream>
#include "solution.h"

using namespace std;

ListNode *create_linkedlists(initializer_list<int> lst) {
  ListNode *res = new ListNode(0);
  ListNode *tail = res;
  for (auto iter = lst.begin(); iter != lst.end(); ++iter) {
    tail->next = new ListNode(*iter);
    tail = tail->next;
  }

  return res->next;
}

int main() {
  Solution s;
  ListNode *l1 = create_linkedlists({1, 1, 2});
  ListNode *l2 = create_linkedlists({1, 1, 2, 3, 3});

  ListNode *res1 = s.deleteDuplicates(l1);
  ListNode *res2 = s.deleteDuplicates(l2);

  for (auto cur = res1; cur != NULL; cur = cur->next) {
    cout << cur->val << "->";
  }
  cout << "NULL" << endl;

  for (auto cur = res2; cur != NULL; cur = cur->next) {
    cout << cur->val << "->";
  }
  cout << "NULL" << endl;

  return 0;
}
