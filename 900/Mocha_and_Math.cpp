#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, input, temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            if (j == 0)
            {
                temp = input;
            }
            temp &= input;
        }
        cout << temp << endl;
    }

    return 0;
}