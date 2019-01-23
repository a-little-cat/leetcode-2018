#include "Solution.h"

int Solution::strStr(string haystack, string needle)
{
    if (needle.size() == 0)
    {
        return 0;
    }
    for (int i = 0; i < ((int)haystack.size() - (int)needle.size() + 1); i++)
    {
        int j = 0;
        for (j = 0; j < needle.size(); j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
            if (j == needle.size() - 1)
            {
                return i;
            }
        }
    }
    return -1;
}