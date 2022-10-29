#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, j, k, increase = 0, temp = 0;
    string ast = "  ";

    cin >> n;
    for (i = 0; i < n * 2 + 1; i++)
    {
        if (i > n)
        {
            if (i == n + 1)
            {
                increase = n;
            }
            for (j = i - increase; j > 0; j--)
            {
                cout << ast;
            }
            for (k = i; k <= n * 2; k++)
            {
                if (i == n * 2)
                {
                    cout << temp;
                }
                else
                {
                    cout << temp << " ";
                }
                temp++;
            }
            temp = n * 2 - i;
            for (k = i; k < n * 2; k++)
            {
                temp--;
                if (k == n * 2 - 1)
                {
                    cout << temp;
                }
                else
                {
                    cout << temp << " ";
                }
            }
            // for (j = i - increase; j > 0; j--)
            // {
            //     cout << ast;
            // }
            cout << "" << endl;
        }
        else
        {
            for (j = 0 + increase; j < n; j++)
            {
                cout << ast;
            }
            for (k = 0; k <= i; k++)
            {
                if (i == 0)
                {
                    cout << k;
                }
                else
                {
                    cout << k << " ";
                }
            }
            for (k = i - 1; k >= 0; k--)
            {
                if (k == 0)
                {
                    cout << k;
                }
                else
                {
                    cout << k << " ";
                }
            }
            // for (j = 0 + increase; j < n; j++)
            // {
            //     cout << ast;
            // }
            cout << "" << endl;
            increase++;
        }
    }
    return 0;
}
