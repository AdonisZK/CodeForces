#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, min, i, j = 0, k, a[105], ans[210];
    cin >> n;
    cin >> a[1];
    for (i = 2; i <= n; i++)
    {
        cin >> a[i];
        if (i == 2)
        {
            min = std::abs(a[i] - a[i - 1]);
            ans[j] = i - 1;
            j++;
            ans[j] = i;
            j++;
        }
        else if (min > std::abs(a[i] - a[i - 1]))
        {
            for (k = 0; k < j; k++)
            {
                ans[k] = 0;
            }
            j = 0;
            min = std::abs(a[i] - a[i - 1]);
            ans[j] = i - 1;
            j++;
            ans[j] = i;
            j++;
        }
        else if (i == n && min > std::abs(a[n] - a[1]))
        {
            for (k = 0; k < j; k++)
            {
                ans[k] = 0;
            }
            j = 0;
            min = std::abs(a[i] - a[1]);
            ans[j] = i;
            j++;
            ans[j] = 1;
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        if (ans[i] != 0)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}
