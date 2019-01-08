#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
int add_node(ListNode **head, int val);
int print_node(ListNode *l);

class Solution
{
  public:
	ListNode *swapPairs(ListNode *head);
};