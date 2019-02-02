#include <iostream>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> nums = {1, 2, 3, 4};
    int target = 1;
    Solution so;
    cout << so.search(nums, target);
}