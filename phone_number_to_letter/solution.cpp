#include "solution.h"

vector<string> Solution::letterCombinations(string digits)
{
    if (digits.empty())
        return vector<string>();
    vector<string> ret;
    vector<string> tmp;
    vector<int> nums;
    for (int i = 0; i < digits.size(); i++)
        nums.push_back(digits[i] - '2');
    vector<string> dict;
    dict.push_back("abc");
    dict.push_back("def");
    dict.push_back("ghi");
    dict.push_back("jkl");
    dict.push_back("mno");
    dict.push_back("pqrs");
    dict.push_back("tuv");
    dict.push_back("wxyz");

    ret.push_back("");
    for (auto i : nums)
    {
        tmp = ret;
        ret.clear();
        for (auto c : dict[i])
        {
            for (auto s : tmp)
            {
                ret.push_back(s + c);
            }
        }
    }
    return ret;
}