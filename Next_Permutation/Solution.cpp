#include "Solution.h"

void print_vec(vector<int> &nums)
{
    for(auto i : nums)
    {
        printf("%d -> ", i);
    }
    printf("END\n");
}

void Solution::nextPermutation(vector<int> &nums)
{
    for(int i = nums.size() - 2; i >= 0; i--)
    {
        if(nums[i + 1] <= nums[i])
        {
            continue;
        }
        else// nums[i]<nums[i+1]
        {
            int j = 0;
            for(j = nums.size() - 1; j > i; j--)
            {
                if(nums[j] > nums[i])
                {
                    break;
                }
            }
            swap(nums[i], nums[j]);
            int k = 1;
            while((i + k) < (nums.size() - k))
            {
                swap(nums[i + k], nums[nums.size() - k]);
                k++;
            }
            return;
        }
    }
    for(int i = 0; i < nums.size() / 2; i++)
    {
        swap(nums[i], nums[nums.size() - 1 - i]);
    }
    return;
}