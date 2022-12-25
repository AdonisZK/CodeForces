#include <bits/stdc++.h>
using namespace std;

int findMax(int mat[25][60])
{
    int maxElement = INT_MIN;

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            if (mat[i][j] > maxElement)
            {
                maxElement = mat[i][j];
            }
        }
    }
    return maxElement;
}

int main(int argc, char const *argv[])
{
    int n, i, count[25][60] = {0}, inputh, inputm;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> inputh >> inputm;

        count[inputh][inputm]++;
    }

    cout << findMax(count) << endl;

    return 0;
}