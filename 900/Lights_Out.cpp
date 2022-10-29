#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[4][4], arrInput[4][4], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arrInput[i][j];
            arr[i][j] = 1;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arrInput[i][j] % 2 == 1)
            {
                // cout << i << j << arrInput[i][j] << endl;
                arr[i][j]++;
                if (i != 0)
                {
                    arr[i - 1][j]++;
                }
                arr[i + 1][j]++;
                if (j != 0)
                {
                    arr[i][j - 1]++;
                }
                arr[i][j + 1]++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j] % 2;
        }
        cout << endl;
    }
    return 0;
}
