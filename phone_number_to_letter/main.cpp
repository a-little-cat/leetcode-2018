#include "solution.h"

int main(int argc, char *argv[])
{
    Solution so;
    auto ret = so.letterCombinations("232");
    for (auto s : ret)
    {
        printf("%s\n", s.c_str());
    }
}