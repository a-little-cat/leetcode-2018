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

ListNode *mergeTwoLists_(ListNode *l1, ListNode *l2)
{
    ListNode head0(0);
    ListNode *l = &head0;
    while (l1 != NULL && l2 != NULL)
    {
        ListNode **nextNode = (l1->val <= l2->val) ? &l1 : &l2;
        l->next = *nextNode;
        *nextNode = (*nextNode)->next;
        l = l->next;
    }
    l->next = l1 ? l1 : l2;

    return head0.next;
}

ListNode *Solution::mergeKLists(vector<ListNode *> &lists)
{
    if (lists.empty())
    {
        return nullptr;
    }
    ListNode *result = NULL;
    for (int i = 0; i < lists.size(); i++)
    {
        result = mergeTwoLists_(result, lists[i]);
    }
    return result;
    // ListNode result(0);
    // ListNode *l_r = &result;
    // ListNode *tmp = NULL;
    // for (auto l : lists)
    // {
    //     while (tmp != NULL && l != NULL)
    //     {
    //         ListNode **nextNode = NULL;
    //         if (tmp->val < l->val)
    //             nextNode = &tmp;
    //         else
    //             nextNode = &l;
    //         l_r->next = *nextNode;
    //         *nextNode = (*nextNode)->next;
    //         l_r = l_r->next;
    //     }
    //     l_r->next = tmp ? tmp : l;

    //     tmp = result.next;
    //     result.next = NULL;
    //     l_r = &result;
    // }

    // return tmp;
}