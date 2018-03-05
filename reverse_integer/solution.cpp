#include "solution.h"

int Solution::reverse(int x) //2147483647 -2147483648
{
    double ret = 0;
    int negative = 0;
    if (x == -2147483648 || x == 0)
        return 0;
    if (x < 0)
        negative = 1, x = 0 - x;
    vector<int> in;
    int i = 0;
    while (x != 0)
    {
        in.push_back(x % 10);
        x = x / 10;
    }
    while (in[0] == 0)
        in.erase(in.begin());
    for (int i = 0; i < in.size(); i++)
        ret *= 10, ret += in[i];
    if (negative == 1)
        ret = 0 - ret;
    if (ret > 2147483647 || ret < -2147483648)
        return 0;
    return int(ret);
}