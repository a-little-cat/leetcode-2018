#include "Solution.h"

int Solution::removeDuplicates(vector<int> &nums)
{
    // int last_num = -INT_MAX;
    // int size = nums.size();
    // for (int i = 0; i < size; i++)
    // {
    //     if (nums[i] == last_num)
    //     {
    //         nums.erase(nums.begin() + i);
    //         i--;
    //         size--;
    //     }
    //     else
    //     {
    //         last_num = nums[i];
    //     }
    // }
    // return nums.size();

    // if (nums.size() < 2)
    // {
    //     return nums.size();
    // }
    // for (auto n = nums.begin() + 1; n != nums.end();)
    // {
    //     if (*n > *(n - 1))
    //     {
    //         n++;
    //     }
    //     else
    //     {
    //         n = nums.erase(n);
    //     }
    // }
    // return nums.size();
    if (nums.size() < 1)
        return nums.size();
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] < nums[j])
        {
            nums[++i] = nums[j];
        }
    }
    return ++i;
}