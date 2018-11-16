#include "solution.h"

int main()
{
    Solution so;
    vector<string> strs;
    strs.push_back("hi");
    strs.push_back("hiaasdf");
    strs.push_back("hiasadsf");
    strs.push_back("hifasdfas");
    cout << so.longestCommonPrefix(strs) << endl;
}