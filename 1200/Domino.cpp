#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, top, bot, tempTop = 0, tempBot = 0, ans = 0, swappable = 0;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> top >> bot;
        if (top % 2 != 0 && bot % 2 == 0 || top % 2 == 0 && bot % 2 != 0)
        {
            swappable = 1;
        }
        tempTop += top;
        tempBot += bot;
    }

    if (tempTop % 2 == 0 && tempBot % 2 == 0)
    {
        cout << "0" << endl;
    }
    else if (tempTop % 2 == 0 && tempBot % 2 != 0)
    {
        cout << "-1" << endl;
    }
    else if (tempTop % 2 != 0 && tempBot % 2 == 0)
    {
        cout << "-1" << endl;
    }
    else if (tempTop % 2 != 0 && tempBot % 2 != 0)
    {
        if (swappable == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}