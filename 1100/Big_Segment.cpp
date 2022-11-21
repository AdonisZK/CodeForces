#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, min, max, ans = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (i == 1)
        {
            min = a;
            max = b;
            ans = 1;
            continue;
        }
        if (a < min)
        {
            min = a;
            ans = -1;
        }
        if (b > max)
        {
            max = b;
            ans = -1;
        }
        if (a <= min && b >= max)
        {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}