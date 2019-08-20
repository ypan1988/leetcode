#include <iostream>
#include <vector>
#include "solution.h"
using std::vector;
using vecIter = vector<int>::iterator;

ListNode *create_linkedlist(std::initializer_list<int> lst) {
  auto iter = lst.begin();
  ListNode *head = lst.size() ? new ListNode(*iter++) : NULL;
  for (ListNode *cur = head; iter != lst.end(); cur = cur->next)
    cur->next = new ListNode(*iter++);
  return head;
}

void printAndClear(ListNode *head) {
  while (head) {
    std::cout << head->val;
    if (head->next) std::cout << "->";
    ListNode *del = head;
    head = head->next;
    delete del;
  }
  std::cout << std::endl;
}

int main() {
  ListNode *l1 = create_linkedlist({1, 2, 3, 4});
  ListNode *l2 = create_linkedlist({1, 2, 3, 4, 5});

  Solution s;
  ListNode *res1 = s.swapPairs(l1);
  ListNode *res2 = s.swapPairs(l2);

  printAndClear(res1);
  printAndClear(res2);

  return 0;
}
