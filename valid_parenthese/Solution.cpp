#include "solution.h"

bool Solution::isValid(string s)
{
    vector<int> status;
    for (char c : s)
    {
        int i_c = 0;
        switch (c)
        {
        case '{':
            i_c = -3;
            break;
        case '}':
            i_c = 3;
            break;
        case '[':
            i_c = -2;
            break;
        case ']':
            i_c = 2;
            break;
        case '(':
            i_c = -1;
            break;
        case ')':
            i_c = 1;
            break;
        }
        if (i_c < 0)
        {
            // for (auto i_s : status)
            // {
            //     if (i_s > i_c)
            //         return false;
            // }
            status.push_back(i_c);
        }
        else
        {
            if (status.size() == 0)
                return false;
            if ((status.back() + i_c) != 0)
                return false;
            status.pop_back();
        }
    }
    if (status.size() != 0)
        return false;
    return true;
}