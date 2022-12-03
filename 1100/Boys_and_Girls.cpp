#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, countn = 0, countm = 0;
    string str = "0";
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        if (n >= m && countn < n && countm < m)
        {
            str = "BG";
            cout << str;
            i++;
            countn++;
            countm++;
        }
        else if (m > n && countn < n && countm < m)
        {
            str = "GB";
            cout << str;
            i++;
            countn++;
            countm++;
        }
        else if (countn < n)
        {
            str = "B";
            cout << str;
            countn++;
        }
        else if (countm < m)
        {
            str = "G";
            cout << str;
            countn++;
        }
    }
    return 0;
}