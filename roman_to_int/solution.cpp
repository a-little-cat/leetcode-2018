#include "solution.h"

int Solution::romanToInt(string s)
{
    string I = "IXCM_";
    string V = "VLD__";
    int ret = 0;
    for (int i = 0; i < 4; i++)
    {
        string tmp = "";
        int temp_ret = 0;
        if ((s.size() > 1) && s.at(s.size() - 1) == I.at(i + 1) && s.at(s.size() - 2) == I.at(i))
        {
            tmp = s.substr(s.size() - 2, 2);
            s = s.substr(0, s.size() - 2);
        }
        else
        {
            while ((s.size() > 0) && ((s.at(s.size() - 1) == I.at(i)) ||
                                      (s.at(s.size() - 1) == V.at(i))))
            {
                tmp = s.at(s.size() - 1) + tmp;
                if (s.size() == 1)
                    break;
                s = s.substr(0, s.size() - 1);
            }
        }
        switch (tmp.size())
        {
        case 0:
            temp_ret = 0;
            break;
        case 1:
            if (tmp.at(0) == I.at(i))
                temp_ret = 1;
            else
                temp_ret = 5;
            break;
        case 2:
            if (tmp.at(0) == I.at(i) && tmp.at(1) == I.at(i))
            {
                temp_ret = 2;
                break;
            }
            if (tmp.at(0) == I.at(i) && tmp.at(1) == V.at(i))
            {
                temp_ret = 4;
                break;
            }
            if (tmp.at(0) == V.at(i) && tmp.at(1) == I.at(i))
            {
                temp_ret = 6;
                break;
            }
            else
            {
                temp_ret = 9;
                break;
            }
        case 3:
            if (tmp.at(0) == I.at(i) && tmp.at(1) == I.at(i) && tmp.at(2) == I.at(i))
            {
                temp_ret = 3;
                break;
            }
            else
            {
                temp_ret = 7;
                break;
            }
        case 4:
            temp_ret = 8;
            break;
        }
        for (int j = 0; j < i; j++)
            temp_ret *= 10;
        ret += temp_ret;
    }
    return ret;
}