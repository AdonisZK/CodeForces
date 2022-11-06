#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, temp, count = 0, countb = 0, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (n % 2 == 0)
        {
            if (temp == 100)
            {
                count++;
            }
        }
        else if (n % 2 == 1)
        {
            if (temp == 100)
            {
                count++;
            }
        }
        countb++;
    }
    if (count % 2 == 0 && count != 0)
    {
        cout << "YES" << endl;
    }
    else if (countb % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
