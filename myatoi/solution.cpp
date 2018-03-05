#include "solution.h"

int Solution::myAtoi(string s)
{
    int point = s.find('.');
    if (point != string::npos)
        s.assign(s, 0, point);
    int negative = 0;
    while (s[0] == ' ')
        s.replace(0, 1, "");
    if (s[0] == '-')
    {
        negative = 1;
        s.replace(0, 1, "");
    }
    else if (s[0] == '+')
    {
        negative = 0;
        s.replace(0, 1, "");
    }
    if (s[0] == '-' || s[0] == '+')
        return 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
            s.assign(s, 0, i);
    }
    long ret = 0;
    if (s.size() > 10)
        if (negative == 1)
            return -2147483648;
        else
            return 2147483647;
    for (int i = 0; i < s.size(); i++)
    {
        ret *= 10;
        ret += s[i] - '0';
    }
    if (negative == 1)
        ret = -ret;

    if (ret >= 2147483648)
        ret = 2147483647;
    if (ret < -2147483648)
        ret = -2147483648;
    return int(ret);
}