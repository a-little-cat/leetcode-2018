#include "Solution.h"

vector<string> Solution::generateParenthesis(int n)
{
    vector<string> out_last;
    vector<string> out;

    for (int i = 0; i < n; i++)
    {
        if (out.size() == 0)
        {
            out.push_back("()");
        }
        else
        {
            out_last = out;
            out.clear();
            for (auto s:out_last)
            {
                for (int k = 0; k <= s.length(); k++)
                {
                    string tmp = s;
                    tmp.insert(k, "()");
                    int flag = 0;
                    for (auto s_ : out)
                    {
                        if (s_ == tmp)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag)
                    {
                        continue;
                    }
                    out.push_back(tmp);
                }
            }
        }
    }
    return out;
}