#include <cstddef>

#include <iostream>
#include <iterator>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode *l1, ListNode *l2){
    ListNode *res = new ListNode(0);
    ListNode *pl = res;

    while (l1 || l2) {
      int val;
      if (l1 && l2) {
        if (l1->val <= l2->val) {
          val = l1->val;
          l1 = l1->next;
        } else {
          val = l2->val;
          l2 = l2->next;
        }
      } else if (l1) {
        val = l1->val;
        l1 = l1->next;
      } else {
        val = l2->val;
        l2 = l2->next;
      }
      pl->next = new ListNode(val);
      pl = pl->next;
    }

    return res->next;
  }

  using iterator = std::vector<ListNode *>::iterator;
  ListNode* mergeKLists(iterator iter1, iterator iter2) {
    int distance = std::distance(iter1, iter2);
    if (distance == 0) return NULL;
    else if (distance == 1) return *iter1;
    else if (distance == 2) return mergeTwoLists(*iter1, *std::next(iter1));
    else return mergeTwoLists(mergeKLists(iter1, iter1 + distance/2), mergeKLists(iter1 + distance/2, iter2));
  }


  ListNode* mergeKLists(std::vector<ListNode *>& lists) {
    return mergeKLists(lists.begin(), lists.end());
  }
};
