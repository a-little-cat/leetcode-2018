#include "solution.h"
// For example, given array S = [-1, 0, 1, 2, -1, -4],

// A solution set is:
// [
//   [-1, 0, 1],
//   [-1, -1, 2]
// ]
vector<vector<int>> Solution::threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ret;
    int size = nums.size();
    for (int i = 0; i < size - 2; i++)
    {
        int target = -nums[i];
        int front = i + 1;
        int back = nums.size() - 1;

        while (front < back)
        {
            int sum = nums[front] + nums[back];
            if (sum < target)
                front++;
            else if (sum > target)
                back--;
            else
            {
                vector<int> triplet(3, 0);
                triplet[0] = nums[i];
                triplet[1] = nums[front];
                triplet[2] = nums[back];
                ret.push_back(triplet);

                while (nums[front] == triplet[1])
                    front++;
                while (nums[back] == triplet[2])
                    back--;
            }
            while (nums[i] == nums[i + 1] && i < (size - 1))
                i++;
        }
    }
    return ret;
}