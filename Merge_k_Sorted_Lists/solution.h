#include <cstddef>

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode* mergeKLists(std::vector<ListNode *>& lists) {
      ListNode *res = new ListNode(0);
      ListNode *pl = res;

      bool flag = false;
      for(auto &elem : lists) { if(elem) flag = true; }

      while (flag) {
	int min_val, min_idx, idx;
	auto tmp = lists.begin();
	idx = 0;
	while(!(*tmp)) { ++tmp; ++idx; }
	min_val = lists[idx]->val;
	min_idx = idx;

	idx = 0;
	for (auto iter = lists.begin(); iter != lists.end(); ++iter, ++idx) {
	  if (*iter && (*iter)->val < min_val) {
	    min_val = (*iter)->val;
	    min_idx = idx;
	  }
	}

	lists[min_idx] = lists[min_idx]->next;

	pl->next = new ListNode(min_val);
	pl = pl->next;

	flag = false;
	for(auto &elem : lists) { if(elem) flag = true; }
      }

      return res->next;
    }
};
