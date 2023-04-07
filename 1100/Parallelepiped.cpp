#define MOD 1000000007

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, x, y, z, sum;
    cin >> a >> b >> c;

    x = sqrt((a * c) / b);
    y = sqrt((a * b) / c);
    z = sqrt((b * c) / a);

    sum = 4 * (x + y + z);
    cout << sum << endl;

    return 0;
}