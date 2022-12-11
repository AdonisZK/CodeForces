#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, input, quarter = 0, half = 0, one = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 25)
        {
            quarter++;
        }
        else if (input == 50)
        {
            half++;
            if (quarter > 0)
            {
                quarter--;
            }
            else
            {
                cout << "NO" << endl;
                exit(0);
            }
        }
        else if (input == 100)
        {
            one++;
            if (half > 0 && quarter > 0)
            {
                half--;
                quarter--;
            }
            else if (quarter > 2)
            {
                quarter -= 3;
            }
            else
            {
                cout << "NO" << endl;
                exit(0);
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}