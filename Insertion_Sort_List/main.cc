#include <initializer_list>
#include <iostream>
using namespace std;

#include "solution.h"

ListNode *CreateList(std::initializer_list<int> lst) {
  ListNode *head = new ListNode(0);
  ListNode *curr = head;
  for (auto iter = lst.begin(); iter != lst.end(); ++iter) {
    curr->next = new ListNode(*iter);
    curr = curr->next;
  }
  return head->next;
}

void PrintList(ListNode *ln) {
  ListNode *curr = ln;
  while (curr) {
    cout << curr->val << "->";
    curr = curr->next;
  }
  cout << "\b\b  " << endl;
}

int main() {
  Solution sol;

  ListNode *l1 = CreateList({4, 2, 1, 3});
  PrintList(l1);
  ListNode *res1 = sol.insertionSortList(l1);
  PrintList(res1);

  ListNode *l2 = CreateList({-1, 5, 3, 4, 0});
  PrintList(l2);
  ListNode *res2 = sol.insertionSortList(l2);
  PrintList(res2);

  return 0;
}