#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int a, b, n, temp, i, j, limit = 9, ans, flag = 0;
    cin >> a >> b >> n;
    cout << a << endl;
    for (int i = 1; i <= n; i++)
    {
        a = a * 10;
        j = 0;
        flag = 0;
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
                flag = 1;
            }
            j++;
        }
    }
    cout << a << endl;
    return 0;
}
