#include <bits/stdc++.h>
using namespace std;

long long calc(long long x, long long y, long long n, long long count)
{
    long long ans;
    count++;
    ans = y - x;
    if (count == n)
    {
        return ans;
    }
    else
    {
        calc(y, ans, n, count);
    }
}

int main(int argc, char const *argv[])
{
    long long x, y, n, count, modulo = 1000000007, ans;

    cin >> x >> y >> n;
    n %= 6;
    n -= 2;
    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        exit(0);
    }
    if (n == -1)
    {
        if (x < 0)
            cout << modulo + x;
        else
            cout << x;
        exit(0);
    }
    else if (n == 0)
    {
        if (y < 0)
            cout << modulo + y;
        else
            cout << y;
        exit(0);
    }
    else
    {
        if (n == -2)
        {
            n = 4;
        }
        ans = calc(x, y, n, 0);
    }
    if (ans < 0)
        cout << modulo + ans;
    else
        cout << ans;
    return 0;
}