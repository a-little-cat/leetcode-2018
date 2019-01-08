#include <iostream>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[])
{
	ListNode *l = NULL;
	add_node(&l, 1);
	add_node(&l, 2);
	add_node(&l, 3);
	add_node(&l, 4);
	add_node(&l, 5);
	add_node(&l, 6);
	add_node(&l, 7);
	Solution so;
	ListNode *ret = so.swapPairs(l);
	print_node(ret);
}