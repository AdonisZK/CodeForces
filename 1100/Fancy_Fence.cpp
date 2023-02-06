#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, j, input, flag = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        if (360 % (180 - input) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}