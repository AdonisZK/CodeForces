#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int s, n, temp1, temp2;
    vector<pair<int, int>> vect;

    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        vect.push_back(make_pair(temp1, temp2));
    }

    sort(vect.begin(), vect.end());

    for (auto &i : vect)
    {
        if (i.first < s)
        {
            s += i.second;
        }
        else
        {
            cout << "NO" << endl;
            exit(0);
        }
    }

    cout << "YES" << endl;
    return 0;
}