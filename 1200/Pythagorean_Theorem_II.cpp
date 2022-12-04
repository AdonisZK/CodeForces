#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c, i, j, k, temp, ans = 0;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = i * i + j * j;
            k = sqrt(temp);
            if (k * k == temp && k <= n)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}