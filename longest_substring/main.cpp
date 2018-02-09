#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

/*
class Solution
{
  public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> map;
        int max_length = 0;
        string substr;
        for (int i = 0; i < s.size(); i++)
        {
            if (map.find(s.at(i)) != map.end())
            {
                substr.append(1, s.at(i));
                for (int j = 0; substr.at(0) != s.at(i); j++)
                {
                    map.erase(substr.at(0)); 
                    substr.assign(substr, 1, substr.size() - 1);
                }
                substr.assign(substr, 1, substr.size() - 1);
                cout << "substr  " << substr << endl;
            }
            else
            {
                substr.append(1, s.at(i));
                map[s.at(i)] = 1;
                cout << "substr  " << substr << endl;
                if (max_length < substr.size())
                    max_length++;
            }
        }
        return max_length;
    }
};
*/
// static const auto ______ = []() {
//     std::ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     return nullptr;
// }();

class Solution
{
  public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length(), ans = 0;
        int index[26] = {0}; // current index of character
        // try to extend the range [i, j]
        for (int j = 0, i = 0; j < n; j++)
        {
            i = max(index[s.at(j) - 'a'], i);
            ans = max(ans, j - i + 1);
            index[s.at(j) - 'a'] = j + 1;
            cout << s.substr(i, j - i + 1) << endl;
            //for (int k = 0; k < 26; k++)
            //   printf("%2d ", index[k]);
            //cout << endl;
        }
        return ans;
    }
};

int main(int argc, char **argv)
{
    string s = "iamjustalittlecat";
    Solution so;
    cout << so.lengthOfLongestSubstring(s) << endl;
    cout << "end" << endl;
    return 0;
}