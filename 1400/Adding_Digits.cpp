#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int a, b, n, temp, i, j = 0, limit = 10, ans, flag = 0;
    cin >> a >> b >> n;
    a = a * 10;
    while (flag == 0)
    {
        temp = a + j;
        if (j == limit)
        {
            cout << "-1" << endl;
            exit(0);
        }
        if (temp % b == 0)
        {
            a = temp;
            cout << a;
            flag = 1;
        }
        j++;
    }

    if (flag == 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << '0';
        }
    }
    return 0;
}
