#include "Solution.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    ListNode *l = NULL;
    int a = 1;
    int b = 1;
    add_node(&l, 1);
    add_node(&l, 2);
    add_node(&l, 3);
    add_node(&l, 4);
    add_node(&l, 5);
    add_node(&l, 6);
    add_node(&l, 7);
    Solution so;
    ListNode *ret = so.reverseKGroup(l, 2);
    print_node(ret);
}