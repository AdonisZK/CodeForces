#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[20];
    int tr = 1, bl = 4, br = 5, i, count = 0;
    for (i = 0; i < 16; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 11; i++)
    {
        count = 0;
        if (i == 3 || i == 7)
        {
            continue;
        }
        if (arr[i] == arr[i + tr])
        {
            count++;
        }
        if (arr[i] == arr[i + bl])
        {
            count++;
        }
        if (arr[i] == arr[i + br])
        {
            count++;
        }
        if (count >= 2 || count == 0)
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;

    return 0;
}