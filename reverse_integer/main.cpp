#include <iostream>
#include "solution.h"
using namespace std;

int main(int argc, char *argv[])
{
    Solution so;
    int x = atoi(argv[1]);
    cout << so.reverse(x);
}