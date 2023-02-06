#define MOD 1000000007

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, price, qual, flag = 0;
    vector<pair<int, int>> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> price >> qual;
        v.push_back(make_pair(price, qual));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second > v[i + 1].second)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
    return 0;
}