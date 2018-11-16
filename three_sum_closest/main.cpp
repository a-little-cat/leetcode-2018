#include "solution.h"
int main()
{
    Solution so;
    vector<int> nums =
        {-1, 2, 1, -4};
    int target = 1;
    auto ret = so.threeSumClosest(nums, target);
    cout << ret << endl;
}