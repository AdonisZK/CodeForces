#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, k, n, flag = 0;
    cin >> y >> k >> n;

    if (y % k == 0)
    {
        x = k;
    }
    else
    {
        x = k - y % k;
    }

    while (x + y <= n)
    {
        x += k;
        cout << x << " ";
    }
    return 0;
}