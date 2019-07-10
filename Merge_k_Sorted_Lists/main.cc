#include "solution.h"
#include <iostream>
#include <vector>

using namespace std;

ListNode *create_linkedlist(std::initializer_list<int> lst)
{
    auto iter = lst.begin();
    ListNode *head = lst.size() ? new ListNode(*iter++) : NULL;
    for (ListNode *cur=head; iter != lst.end(); cur=cur->next)
        cur->next = new ListNode(*iter++);
    return head;
}

int main()
{
    Solution s;
    ListNode *l1 = create_linkedlist({1,4,5});
    ListNode *l2 = create_linkedlist({1,3,4});
    ListNode *l3 = create_linkedlist({2,6});
    vector<ListNode *> lists;
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);
    ListNode *ret = s.mergeKLists(lists);
    for (ListNode *cur = ret; cur; cur = cur->next)
        cout << cur->val << "->";
    cout << "\b\b  " << endl;

    return 0;
}
