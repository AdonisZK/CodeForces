#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long int a, b, c, i, j, k, l, temp, max, ans = 0;
    int *stored = new int[10000005];
    cin >> a >> b >> c;
    max = a * b * c;
    memset(stored, 0, sizeof(stored));
    for (i = 1; i <= max; i++)
    {
        for (j = i; j <= max; j += i)
            stored[j]++;
    }

    int mod = 1073741824;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            for (k = 1; k <= c; k++)
            {
                ans += stored[i * j * k];
                ans = ans % mod;
            }
        }
    }
    cout << ans << endl;
    return 0;
}