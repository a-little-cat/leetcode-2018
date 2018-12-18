#include "solution.h"

int add_node(ListNode *head, int val)
{
    while (head != NULL)
        head = head->next;
    head = new ListNode(val);
    return 0;
}

int print_node(ListNode *l)
{
    while (l != NULL)
    {
        printf("->%d", l->val);
        l = l->next;
    }
    printf("\n");
    return 0;
}

ListNode *
Solution::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *l = NULL;
    ListNode *tmp = NULL;
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->val < l2->val)
        {
            add_node(l, l1->val);
            ListNode *tmp = l1->next;
            free(l1);
            l1 = tmp;
        }
        else
        {
            add_node(l, l2->val);
            tmp = l2->next;
            free(l2);
            l2 = tmp;
        }
    }
    while (l1 != NULL)
    {
        add_node(l, l1->val);
        tmp = l1->next;
        free(l1);
        l1 = tmp;
    }
    while (l2 != NULL)
    {
        add_node(l, l2->val);
        tmp = l2->next;
        free(l2);
        l2 = tmp;
    }
    return l;
}