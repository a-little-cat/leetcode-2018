#include "Solution.h"

int add_node(ListNode **head, int val)
{
    if (*head == NULL)
    {
        *head = new ListNode(val);
        return 0;
    }
    ListNode *p = *head;
    while (p->next != NULL)
        p = p->next;
    p->next = new ListNode(val);
    return 0;
}

int print_node(ListNode *l)
{
    if (l == NULL)
        printf("list is empty\n");
    printf("%d", l->val);
    l = l->next;
    while (l != NULL)
    {
        printf("->%d", l->val);
        l = l->next;
    }
    printf("\n");
    return 0;
}

ListNode *Solution::reverseKGroup(ListNode *head, int k)
{
    if (head == NULL)
        return head;
    if (k < 2)
        return head;
    ListNode ret(0);
    ret.next = head;
    ListNode *top = &ret;
    ListNode *end = top;
    ListNode *tmp_node = 0;
    ListNode *new_top = 0;

    while (1)
    {
        for (int i = 0; i < k; i++)
        {
            if (end->next != NULL)
            {
                end = end->next;
            }
            else
            {
                return ret.next;
            }
        }
        new_top = top->next;
        for (int i = 0; i < k - 1; i++)
        {
            tmp_node = top->next;
            top->next = tmp_node->next;
            tmp_node->next = end->next;
            end->next = tmp_node;
        }
        top = new_top;
        end = new_top;
    }
}