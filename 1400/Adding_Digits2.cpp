#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    long long int b, n, temp, i, limit, ans;
    cin >> a >> b >> n;
    for (int i = 1; i <= n; i++)
    {
        a += '0';
        temp = stoll(a);
        limit = (pow(10, i)) - 1;
        ans = temp + i;
        if (i == limit)
        {
            cout << "-1" << endl;
        }
        if (ans % b == 0)
        {
            ans = (ans * 10) + i;
        }
        i++;
    }
    return 0;
}
