#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<pair<int, int>> arr, ans;
    int n, input, count = 0;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> input;
        arr.push_back(make_pair(input, i));
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < 2 * n - 1; i += 2)
    {
        if (arr[i].first == arr[i + 1].first)
        {
            ans.push_back(make_pair(arr[i].second, arr[i + 1].second));
            count++;
        }
        else
        {
            cout << "-1" << endl;
            exit(0);
        }
    }

    for (auto &i : ans)
    {
        cout << i.first << ' ' << i.second << endl;
    }
    return 0;
}