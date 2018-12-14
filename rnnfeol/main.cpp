#include <iostream>
#include "solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    Solution so;
    ListNode *l = NULL;
    l = new ListNode(1);
    ListNode *n = l;
    n->next = new ListNode(2);
    n = n->next;
    n->next = new ListNode(3);
    n = n->next;
    n->next = new ListNode(4);
    n = n->next;
    n->next = new ListNode(5);
    n = n->next;
    // while (l != NULL)
    // {
    //     printf("l->val:%d\n", l->val);
    //     l = l->next;
    // }
    // printf("before remove\n");
    l = so.removeNthFromEnd(l, 2);

    while (l != NULL)
    {
        printf("l->val:%d\n", l->val);
        l = l->next;
    }
}