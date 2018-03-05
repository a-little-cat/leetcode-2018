#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
  public:
    int maxArea(vector<int> &height)
    {
        int area = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left != right)
        {
            int new_area = (right - left) * min(height[left], height[right]);
            if (area < new_area)
                area = new_area;
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return area;
    }
};