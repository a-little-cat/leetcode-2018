#include <iostream>
#include "solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    Solution so;
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;
    add_node(head1, 1);
    add_node(head1, 2);
    add_node(head1, 4);
    add_node(head2, 1);
    add_node(head2, 3);
    add_node(head2, 4);

    ListNode *l = so.mergeTwoLists(head1, head2);
    print_node(l);
}