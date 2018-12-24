#include "Solution.h"

void helper(vector<string> &result, string s, int left_num, int right_num) //left_num is the num of left that haven't added   right_num is add_ed left - added right
{
    if (left_num == 0 && right_num == 0)
    {
        result.push_back(s);
        return;
    }
    if (left_num > 0)
        helper(result, s + "(", left_num - 1, right_num + 1);
    if (right_num > 0)
        helper(result, s + ")", left_num, right_num - 1);
}

vector<string> Solution::generateParenthesis(int n)
{
    // vector<string> result;
    // helper(result, "", n, 0);
    // return result;
    vector<string> result;
    if (n < 1)
        return result;
    vector<vector<string>> buffer(n + 1, vector<string>());
    buffer[0] = (vector<string>(1, ""));
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= i - 1; j++)
            for (int k = 0; k < buffer[j].size(); k++)
                for (int l = 0; l < buffer[i - j - 1].size(); l++)
                    buffer[i].push_back(buffer[j][k] + "(" + buffer[i - j - 1][l] + ")");
    return buffer[n];
}