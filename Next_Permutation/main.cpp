#include <iostream>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> nums = {1, 3, 2};
    Solution so;
    so.nextPermutation(nums);
    for(auto i : nums)
    {
        printf("%d -> ", i);
    }
    printf("END\n");
}