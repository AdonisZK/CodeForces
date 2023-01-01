#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, s, t, input;
    vector<int> vect;
    cin >> n >> s >> t;
    if (s == t)
    {
        cout << 0 << endl;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (i == 0)
        {
            if (input != s)
            {
                cout << -1 << endl;
                exit(0);
            }
        }
        vect.push_back(input);
    }

    auto it = find(vect.begin(), vect.end(), t);

    if (it != vect.end())
    {
        int index = it - vect.begin();
        cout << index << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}