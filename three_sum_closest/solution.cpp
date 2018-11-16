#include "solution.h"
// For example, given array S = {-1 2 1 -4}, and target = 1.

// The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
int Solution::threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int ans = 0, diff = INT_MAX;
    for (int i = 0; i < nums.size() - 2; i++)
    { // -2 for left and right
        int left = i + 1, right = nums.size() - 1, sum = 0, tmp = 0;
        while (left < right)
        {
            sum = nums[i] + nums[left] + nums[right];
            if (sum == target)
                return target;
            else if (sum < target)
                left++;
            else
                right--;
            // get diff
            tmp = abs(target - sum);
            if (tmp < diff)
            {
                diff = tmp;
                ans = sum;
            }
        }
        while(nums[i]==nums[i+1])
            i++;
    }
    return ans;
}