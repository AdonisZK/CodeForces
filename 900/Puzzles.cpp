#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, i, temp, temp2, min = 10000;
    vector<int> arr;

    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    for (i = 0; i < m; i++)
    {
        if (i + n - 1 < m)
        {
            temp = arr[i];
            temp2 = arr[i + n - 1];
        }

        if (temp2 - temp < min)
        {
            min = temp2 - temp;
        }
    }

    cout << min << endl;

    return 0;
}