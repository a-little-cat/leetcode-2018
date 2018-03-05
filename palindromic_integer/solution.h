#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
  public:
    bool isPalindrome(int x)
    {
        if (x == INT_MIN)
            return false;
        if (x < 0)
            return false;
        int len = 0;
        int a[10] = {0};
        while (x != 0)
            a[len++] = x % 10, x /= 10;
        for (int i = 0; len - 1 - i > i; i++)
            if (a[i] != a[len - 1 - i])
                return false;
        return true;
    }
};