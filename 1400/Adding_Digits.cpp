#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    long long int b, n, temp, i = 1, limit, ans;
    cin >> a >> b >> n;
    string mul(n, '0');
    a += mul;
    temp = stoll(a);
    limit = (pow(10, n)) - 1;
    ans = temp;
    while (!NULL)
    {
        ans = temp + i;
        if (i == limit)
        {
            cout << "-1" << endl;
            exit(0);
        }
        if (ans % b == 0)
        {
            cout << ans << endl;
            exit(0);
        }
        i++;
    }
    return 0;
}
