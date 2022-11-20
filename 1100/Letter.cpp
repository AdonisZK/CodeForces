#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int flag, count;
    list<char> str1, str2;
    char c;
    string temp;

    getline(cin, temp);
    for (auto c : temp)
    {
        str1.push_back(c);
    }

    getline(cin, temp);
    for (auto c : temp)
    {
        str2.push_back(c);
    }

    for (auto i : str2)
    {
        flag = 0;
        count = 0;
        for (list<char>::iterator it = str1.begin(); it != str1.end(); it++)
        {
            if (*it == i && i != ' ')
            {
                str1.erase(it);
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != ' ')
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}