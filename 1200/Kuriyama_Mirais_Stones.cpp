#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, l, r, type, i, j;
    long long input, ans = 0, *stored = new long long[100005], *storedSorted = new long long[100005];
    vector<long long> vec, vecSorted;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        vec.push_back(input);
        vecSorted.push_back(input);
    }
    stored[0] = 0;
    storedSorted[0] = 0;
    cin >> m;
    sort(vecSorted.begin(), vecSorted.end());
    for (i = 1; i <= n; i++)
    {
        stored[i] = stored[i - 1] + vec[i - 1];
        storedSorted[i] = storedSorted[i - 1] + vecSorted[i - 1];
    }

    for (i = 0; i < m; i++)
    {
        cin >> type >> l >> r;
        ans = 0;
        if (type == 1)
        {
            ans = stored[r] - stored[l - 1];
        }
        else if (type == 2)
        {
            ans = storedSorted[r] - storedSorted[l - 1];
        }
        cout << ans << endl;
    }
    return 0;
}