#include <iostream>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    Solution so;
    int ret = so.divide(-2147483648, -1);
    printf("result is %d\n", ret);
}