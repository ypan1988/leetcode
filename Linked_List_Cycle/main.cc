#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

ListNode *CreateList(vector<int> ivec, int pos) {
  ListNode *dummy = new ListNode(0);
  ListNode *curr = dummy, *tmp = NULL;

  for (auto i = 0; i < ivec.size(); ++i) {
    curr->next = new ListNode(ivec[i]);
    curr = curr->next;
    if (pos >= 0 && i == pos) tmp = curr;
  }
  curr->next = tmp;

  return dummy->next;
}

void print(ListNode *node, int first_n_elem = 10) {
  int idx = 0;
  while (idx++ < first_n_elem && node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
}

int main() {
  vector<int> ivec;
  int pos;
  ListNode *head;

  Solution sol;

  ivec = {3, 2, 0, -4};
  pos = 1;
  head = CreateList(ivec, pos);
  print(head);
  cout << sol.hasCycle(head) << endl;

  ivec = {1, 2};
  pos = 0;
  head = CreateList(ivec, pos);
  print(head);
  cout << sol.hasCycle(head) << endl;

  ivec = {1};
  pos = -1;
  head = CreateList(ivec, pos);
  print(head);
  cout << sol.hasCycle(head) << endl;

  return 0;
}