#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, i, j, count = 1, countRow = 1;
    char checkerBoard[1005][1005];
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> checkerBoard[i][j];
        }
    }

    for (i = 1; i <= n; i++)
    {
        count = countRow;
        for (j = 1; j <= m; j++)
        {
            if (count % 2 == 1 && checkerBoard[i][j] == '.')
            {
                cout << "B";
            }
            else if (count % 2 == 0 && checkerBoard[i][j] == '.')
            {
                cout << "W";
            }
            else if (checkerBoard[i][j] == '-')
            {
                cout << "-";
            }
            count++;
        }
        countRow++;
        cout << endl;
    }
    return 0;
}
