#include "Solution.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> input = {}; // 1, 2, 2, 3, 4, 5, 6};
    Solution so;
    cout << so.removeDuplicates(input) << endl;
    for (auto i : input)
    {
        cout << i << "-->";
    }
    cout << "end\n";
}