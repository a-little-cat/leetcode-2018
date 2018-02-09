#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
            swap(nums1, nums2);
        int n = nums1.size();
        int m = nums2.size();
        int L1, L2, R1, R2, c1, c2;
        int lo = 0, hi = 2 * n;
        printf("lo:%4dhi:%4d\n", lo, hi);
        printf("   lo  hi  c1  c2  L1  L2  R1  R2  \n");
        while (lo <= hi)
        {
            c1 = (lo + hi) / 2;
            c2 = m + n - c1;
            L1 = (c1 == 0) ? INT_MIN : nums1[(c1 - 1) / 2];
            R1 = (c1 == 2 * n) ? INT_MAX : nums1[c1 / 2];
            L2 = (c2 == 0) ? INT_MIN : nums2[(c2 - 1) / 2];
            R2 = (c2 == 2 * m) ? INT_MAX : nums2[c2 / 2];

            if (L1 > R2)
                hi = c1 - 1;
            else if (L2 > R1)
                lo = c1 + 1;
            else
                break;
            printf("%4d%4d%4d%4d%4d%4d%4d%4d\n",
                   lo, hi, c1, c2, L1, L2, R1, R2);
        }
        printf("%4d%4d%4d%4d%4d%4d%4d%4d\n",
               lo, hi, c1, c2, L1, L2, R1, R2);
        return (max(L1, L2) + min(R1, R2)) / 2.0;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {4, 5, 6, 7, 8, 9, 10};
    // vector<int> nums1 = {1, 2};
    // vector<int> nums2 = {3, 4};
    printf("#, 1, #, 2, #, 3, #, 4, #, 5 #,   \n#, 4, #, 5, #, 6, #, 7, #, 8, #, 9, #, 10\n");
    Solution so;
    cout << so.findMedianSortedArrays(nums1, nums2) << endl;
}