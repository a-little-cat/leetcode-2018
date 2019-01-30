#include "Solution.h"

int Solution::divide(int dividend, int divisor)
{
    if((divisor == 0) || ((divisor == -1) && (dividend == (-__INT_MAX__ - 1))))
    {
        return __INT_MAX__;
    }
    int sig = (dividend < 0) ^ (divisor < 0);
    long long dvd = labs(dividend);
    long long dvs = labs(divisor);
    int ret = 0;
    while(dvd >= dvs)
    {
        long long tmp = dvs;
        int mul = 1;
        while((tmp << 1) <= dvd)
        {
            mul <<= 1;
            tmp <<= 1;
            // cout << "tmp is " << tmp << endl;
            // int tmp = 0;
            // cin >> tmp;
        }
        dvd -= tmp;
        ret += mul;
    }
    return sig ? -ret : ret;
}