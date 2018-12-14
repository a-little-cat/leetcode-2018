#include "solution.h"

ListNode *Solution::removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL)
        return head;
    ListNode *end = head;
    int num = 0;
    while (end != NULL)
        end = end->next, num++;
    int l_n = num - n + 1;
    end = head;
    if (l_n == 1)
    {
        end = head->next;
        free(head);
        return end;
    }
    for (int i = 0; i < l_n - 2; i++)
    {
        end = end->next;
    }
    if (end->next != NULL)
    {
        ListNode *tmp = end->next;
        end->next = tmp->next;
        free(tmp);
    }
    return head;
}