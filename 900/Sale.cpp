#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, temp, i, ans = 0;
    vector<int> arr;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        arr.insert(arr.begin() + i, temp);
    }
    sort(arr.begin(), arr.end());

    for (i = 0; i < m; i++)
    {
        temp = arr[i];
        if (temp <= 0)
        {
            ans += temp;
        }
    }

    cout << ans * -1 << endl;

    return 0;
}
