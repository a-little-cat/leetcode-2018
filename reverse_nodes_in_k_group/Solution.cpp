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
    if (k <= 2)
        return head;
    ListNode ret(0);
    ret.next = head;
    ListNode *top = &ret;
    ListNode *end = 0;
    ListNode **nodes = (ListNode **)malloc(sizeof(ListNode *) * (k + 2));
    int flag = 1;
    while (1)
    {
        for (int i = 0; i <= k; i++)
        {
            if (top != NULL)
            {
                nodes[i] = top;
                top = top->next;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        nodes[k + 1] = top;

        if (flag == 1)
        {
            nodes[0]->next = nodes[k];
            nodes[1]->next = nodes[k + 1];
            for (int i = 2; i <= k; i++)
            {
                nodes[i]->next = nodes[i - 1];
            }
            top = nodes[1];
        }
        else
        {
            break;
        }
    }
    free(nodes);
    return ret.next;
}