#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
};
int add_node(ListNode *head, int val);
int print_node(ListNode *l);