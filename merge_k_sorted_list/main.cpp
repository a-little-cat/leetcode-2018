#include <iostream>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    ListNode *L1 = NULL;
    ListNode *L2 = NULL;
    ListNode *L3 = NULL;
    add_node(&L1, 1);
    add_node(&L1, 4);
    add_node(&L1, 5);
    add_node(&L2, 1);
    add_node(&L2, 3);
    add_node(&L2, 4);
    add_node(&L3, 2);
    add_node(&L3, 6);
    vector<ListNode *> lists;
    lists.push_back(L1);
    lists.push_back(L2);
    lists.push_back(L3);
    Solution so;
    auto result = so.mergeKLists(lists);
    print_node(result);
}