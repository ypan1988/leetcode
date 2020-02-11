#include <cstddef>
#include <unordered_set>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  bool hasCycle(ListNode *head) {
    unordered_set<ListNode *> s;
    while (head) {
      if (s.count(head))
        return true;
      else
        s.insert(head);
      head = head->next;
    }
    return false;
  }
};