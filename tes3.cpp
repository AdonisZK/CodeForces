#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, top, bot, ans = 0;
    vector<pair<int, int>> arr;

    cin >> n;
    if (n == 1)
    {
        cout << "-1 " << endl;
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        cin >> top >> bot;
        if (i == 0)
        {
            arr.push_back(make_pair(top, bot));
            continue;
        }
        if ((top + arr[i - 1].second) % 2 == 0)
        {
            arr.push_back(make_pair(top, bot));
        }
        else if ((top + arr[i - 1].first) % 2 == 0)
        {
            swap(arr[i - 1].first, arr[i - 1].second);
            arr.push_back(make_pair(top, bot));
            ans++;
        }
        else if ((bot + arr[i - 1].second) % 2 == 0)
        {
            swap(arr[i].first, arr[i].second);
            arr.push_back(make_pair(bot, top));
            ans++;
        }
        else if ((bot + arr[i - 1].first) % 2 == 0)
        {
            swap(arr[i - 1].first, arr[i - 1].second);
            swap(arr[i].first, arr[i].second);
            arr.push_back(make_pair(bot, top));
            ans += 2;
        }
        else
        {
            cout << "-1 " << endl;
            exit(0);
        }
    }

    cout << ans << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i].first << ' ' << arr[i].second << endl;
    }

    return 0;
}