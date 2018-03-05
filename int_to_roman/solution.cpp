#include "solution.h"

string Solution::intToRoman(int num) //1234
{
    string ret;
    string roman = "IVXLCDM"; // 1 5 10 50 100 500 1000
    int moweishu = 0;
    for (int i = 0; i < 4; i++)
    {
        moweishu = num % 10;
        num /= 10;
        string temp_ret;
        if (moweishu == 9)
        {
            temp_ret = roman.substr(2 * i, 1) + roman.substr(2 * i + 2, 1) + temp_ret;
            ret = temp_ret + ret;
            temp_ret = "";
            continue;
        }
        if (moweishu >= 5)
            temp_ret = roman.at(2 * i + 1) + temp_ret, moweishu -= 5;
        if (moweishu == 0)
        {
            ret = temp_ret + ret;
            temp_ret = "";
            continue;
        }
        if (moweishu == 4)
        {
            temp_ret = roman.substr(2 * i, 2) + temp_ret;
            ret = temp_ret + ret;
            temp_ret = "";
            continue;
        }
        for (int j = 0; j < moweishu; j++)
            temp_ret = temp_ret + roman.at(2 * i);
        ret = temp_ret + ret;
        temp_ret = "";
    }
    return ret;
}