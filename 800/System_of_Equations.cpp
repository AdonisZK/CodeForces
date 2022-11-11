#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, i, j, count = 0;

    cin >> n >> m;
    for (i = 0; i <= 1000; i++)
    {
        for (j = 0; j <= 1000; j++)
        {
            if (i * i + j == n && i + j * j == m)
            {
                count++;
            }
            if (i + j > n && i + j > m)
            {
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}