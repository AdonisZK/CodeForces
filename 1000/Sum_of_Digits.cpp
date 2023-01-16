#define MOD 1000000007

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, ans = 0, len, temp = 0, temp2 = 0, div;
    cin >> n;
    len = to_string(n).length();
    while (len != 1)
    {
        for (long long i = 0; i < len; i++)
        {
            temp = n;
            div = pow(10, i) + 0.5;
            temp /= div;
            temp2 += temp % 10;
        }
        n = temp2;
        len = to_string(n).length();
        temp2 = 0;
        ans++;
    }
    cout << ans << endl;
    return 0;
}