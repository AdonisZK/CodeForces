#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, temp, max = -1, min = 1000000, limit = 1000000, flag = 0;
    vector<int> ac, wa;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ac.push_back(temp);
        if (temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        wa.push_back(temp);
        if (temp < limit)
        {
            limit = temp;
        }
        if (temp <= max)
        {
            cout << "-1" << endl;
            exit(0);
        }
    }

    for (auto i : ac)
    {
        if (i * 2 <= max)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << max << endl;
    }
    else
    {
        if (min * 2 < limit)
        {
            cout << min * 2 << endl;
            exit(0);
        }
        cout << "-1" << endl;
    }

    return 0;
}