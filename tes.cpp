#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, i, temp, ansMin = 0, ansMax = 0;
    vector<int> min, max;
    cin >> n >> m;

    for (i = 0; i < m; i++)
    {
        cin >> temp;
        min.push_back(temp);
        max.push_back(temp);
    }

    sort(min.begin(), min.end());
    sort(max.begin(), max.end(), greater<int>());

    for (i = 0; i < m;)
    {
        if (n == 0)
        {
            break;
        }
        ansMax += max[i];
        max[i]--;
        n--;
        sort(max.begin(), max.end(), greater<int>());
    }

    // for (auto &i : min)
    // {
    //     cout << i + 1 << endl;
    // }

    cout << ansMax << endl;

    return 0;
}