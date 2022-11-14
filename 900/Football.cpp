#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0, flag = 0;
    char c, temp;
    list<char> str;

    while (cin >> c)
    {
        str.push_back(c);
    }

    for (auto &i : str)
    {
        if (count == 7)
        {
            cout << "YES" << endl;
            exit(0);
        }
        if (flag == 0)
        {
            temp = i;
            flag = 1;
            count++;
            continue;
        }
        if (i == temp)
        {
            count++;
        }
        else if (i != temp)
        {
            count = 1;
            temp = i;
        }
    }
    if (count == 7)
    {
        cout << "YES" << endl;
        exit(0);
    }
    cout << "NO" << endl;
    return 0;
}