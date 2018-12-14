#include <iostream>
#include "solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> nums{-1, 0, -5, -2, -2, -4, 0, 1, -2};
    int target = -9;
    Solution so;
    auto out = so.fourSum(nums, target);
    for (auto v_i : out)
    {
        for (auto i : v_i)
            printf("%d ", i);
        printf("\n");
    }
}