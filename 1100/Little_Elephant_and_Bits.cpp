#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<char> str;
    int flag = 0;
    char c;

    while (cin >> c)
    {
        if (c == '0' && flag == 0)
        {
            flag = 1;
            continue;
        }
        str.push_back(c);
    }

    if (flag == 0)
    {
        str.pop_back();
    }
    for (auto i : str)
    {
        cout << i;
    }
    return 0;
}