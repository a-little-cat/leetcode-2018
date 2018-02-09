#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int>::iterator it = map.find(target - nums[i]);
            if (it != map.end())
                return vector<int>{it->second, i};
            map[nums[i]] = i;
        }
    }
};

int main(int argc, char **argv)
{
    vector<int> nums = {1, 2, 3, 5};
    int target = 5;
    Solution s;
    vector<int> answer = s.twoSum(nums, target);
    printf("%d %d\n", answer[0], answer[1]);
}