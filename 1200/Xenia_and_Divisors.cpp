#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, n, input, count[15] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 1 || input == 2 || input == 3 || input == 4 || input == 6)
        {
            count[input]++;
        }
        else
        {
            cout << -1 << endl;
            exit(0);
        }
    }

    for (int i = 0; i < n / 3; i++)
    {
        if (count[6] > 0)
        {
            if (count[3] > 0 && count[1] > 0)
            {
                count[10]++;
                count[6]--;
                count[3]--;
                count[1]--;
            }
            else if (count[2] > 0 && count[1] > 0)
            {
                count[11]++;
                count[6]--;
                count[2]--;
                count[1]--;
            }
            else
            {
                cout << -1 << endl;
                exit(0);
            }
        }
        else if (count[4] > 0)
        {
            if (count[2] > 0 && count[1] > 0)
            {
                count[12]++;
                count[4]--;
                count[2]--;
                count[1]--;
            }
            else
            {
                cout << -1 << endl;
                exit(0);
            }
        }
        else
        {
            cout << -1 << endl;
            exit(0);
        }
    }

    int total = count[10] + count[11] + count[12];
    for (int i = 0; i < total; i++)
    {
        if (count[10] > 0)
        {
            cout << "1 "
                 << "3 "
                 << "6" << endl;
            count[10]--;
        }
        else if (count[11] > 0)
        {
            cout << "1 "
                 << "2 "
                 << "6" << endl;
            count[11]--;
        }
        else if (count[12] > 0)
        {
            cout << "1 "
                 << "2 "
                 << "4" << endl;
            count[12]--;
        }
    }
    return 0;
}