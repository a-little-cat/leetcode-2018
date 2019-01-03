#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  ListNode *mergeKLists(vector<ListNode *> &lists);
};

int add_node(ListNode **head, int val);
int print_node(ListNode *l);