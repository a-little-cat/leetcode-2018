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

ListNode *Solution::swapPairs(ListNode *head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	ListNode ret(0);
	ret.next = head;
	ListNode *p = &ret;
	ListNode *new_node = NULL;
	ListNode *second_node = NULL;

	while (p->next && p->next->next)
	{
		new_node = p->next->next->next;
		second_node = p->next->next;
		p->next->next->next = p->next;
		p->next->next = new_node;
		p->next = second_node;
		p = p->next->next;
	}

	return ret.next;
}