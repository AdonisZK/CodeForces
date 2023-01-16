#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stdio.h>
#include <memory.h>
#include <algorithm>
#include <stack>
#include <deque>
#include <queue>

#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define oo 2000000000
using namespace std;
int a[1000001], i, j, n, sum, res = 0;
char c[1000101];
int main()
{

    cin >> c;
    n = strlen(c);
    for (i = 0; i < n; ++i)
    {
        a[i] = c[i] - 48;
        cout << c[i] - 48 << endl;
    }

    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    while (true)
    {
        sum = 0;
        res++;
        for (i = 0; i < n; ++i)
        {
            sum += a[i];
        }
        n = 0;
        if (sum < 10)
            break;
        while (sum)
        {
            a[n++] = sum % 10;
            sum /= 10;
        }
    }
    cout << res;
    return 0;
}