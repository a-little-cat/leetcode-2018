#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode preHead(0), *p = &preHead;
        int extra = 0;
        while (l1 || l2 || extra)
        {
            int sum = extra + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            p->next = new ListNode(sum % 10);
            p = p->next;
            extra = sum / 10;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return preHead.next;
    }
};

int main(int argc, char **argv)
{
    ListNode *l_1 = new ListNode(1);
    l_1->next = new ListNode(2);
    l_1->next->next = new ListNode(3);
    ListNode *l_2 = new ListNode(1);
    l_2->next = new ListNode(9);
    l_2->next->next = new ListNode(9);
    Solution s;
    ListNode *l_3 = s.addTwoNumbers(l_1, l_2);
    while (l_3)
    {
        printf("%d", l_3->val);
        l_3 = l_3->next;
    }
    printf("\n");
}