#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int mat[5][5], checker, ans = 4;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 2 || i == 3)
        {
            ans--;
        }
        else if (i == 4 || i == 5)
        {
            ans++;
        }
        for (int j = 1; j <= 5; j++)
        {
            if (j == 2 || j == 3)
            {
                ans--;
            }
            else if (j == 4 || j == 5)
            {
                ans++;
            }
            cin >> checker;
            if (checker == 1)
            {
                cout << ans << endl;
                exit(0);
            }
        }
    }
    return 0;
}
