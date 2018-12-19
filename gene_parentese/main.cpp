#include <iostream>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    Solution so;
    auto ret = so.generateParenthesis(3);
    for (auto s : ret)
    {
        printf("%s\n", s.c_str());
    }
}