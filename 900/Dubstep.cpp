#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, flag = 0;
    string str, strFind = "WUB", strNow, strAns;
    cin >> str;
    for (i = 0; i < str.length(); i++)
    {
        if (i + 2 < str.length())
        {
            strNow += str[i];
            strNow += str[i + 1];
            strNow += str[i + 2];
        }
        if (strNow == strFind)
        {
            i += 2;
            if (flag == 1)
            {
                strAns += ' ';
                flag = 0;
            }
        }
        else
        {
            strAns += str[i];
            flag = 1;
        }
        strNow = "";
    }
    cout << strAns << endl;
    return 0;
}