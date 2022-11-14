#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, i, temp, count = 1;
    cin >> n >> a >> b;
    if (a + b < n)
    {
        cout << "masuk" << endl;
        temp = n - (a + b);
        a += temp;
        count = temp - 1;
        cout << "a : " << a << endl;
        cout << "count : " << count + b << endl;
    }
    else if (a + b > n)
    {
    }
    // for (int i = a; i < n; i++)
    // {
    //     cout << "b : " << b << endl;
    //     if (b <= 0)
    //     {
    //         break;
    //     }
    //     b--;
    //     count++;
    // }
    // cout << count << endl;

    return 0;
}