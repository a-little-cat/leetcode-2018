#include "solution.h"

string Solution::longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 0)
        return "";
    int i;
    int min_longth = INT_MAX;
    for (i = 0; i < strs.size(); i++)
        if (strs[i].size() < min_longth)
            min_longth = strs[i].size();
    int break_flag = 0;
    for (i = 0; i < min_longth; i++)
    {
        for (int j = 1; j < strs.size(); j++)
        {
            if (strs[j].at(i) != strs[0].at(i))
            {
                break_flag = 1;
                break;
            }
        }
        if (break_flag)
            break;
    }
    return strs[0].substr(0, i);
}