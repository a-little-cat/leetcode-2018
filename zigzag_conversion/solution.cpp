#include "solution.h"

string Solution::convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    string ret;
    int po = 0;
    for (int i = 1; i <= numRows; i++)
    {
        if (i == 1 || i == numRows)
            for (po = i; po <= s.size(); po += 2 * (numRows - 1))
            {
                ret += s[po - 1];
            }
        else
            for (po = i; po <= s.size(); po += 2 * (numRows - 1))
            {
                ret += s[po - 1];
                if (po + 2 * (numRows - i) <= s.size())
                    ret += s[po + 2 * (numRows - i) - 1];
            }
    }
    return ret;
}