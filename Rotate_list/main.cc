#include <initializer_list>
#include <iostream>
#include "solution.h"

using namespace std;

ListNode *create_linkedlist(initializer_list<int> lst) {
  auto iter = lst.begin();
  ListNode *head = lst.size() ? new ListNode(*iter++) : NULL;
  for (ListNode *cur = head; iter != lst.end(); cur = cur->next) {
    cur->next = new ListNode(*iter++);
  }

  return head;
}

int main()
{
  Solution s;

  ListNode *l1 = create_linkedlist({1,2,3,4,5});
  ListNode *l2 = create_linkedlist({0,1,2});

  ListNode *res1 = s.rotateRight(l1, 2);
  ListNode *res2 = s.rotateRight(l2, 4);

  for (auto cur = res1; cur != NULL; cur = cur->next) {
    std::cout << cur->val << "->";
  }
  std::cout << "NULL" << std::endl;

  for (auto cur = res2; cur != NULL; cur = cur->next) {
    std::cout << cur->val << "->";
  }
  std::cout << "NULL" << std::endl;

  return 0;
}
