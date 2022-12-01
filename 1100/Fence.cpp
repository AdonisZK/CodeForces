#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, i, temp = 0, min = 1000000, ans = 1, count = 0;
    vector<int> vec;
    cin >> n >> k;
    vec.push_back(0);
    for (i = 1; i <= n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    temp = 0;
    for (i = 1; i <= k; i++)
    {
        temp += vec[i];
    }
    min = temp;
    for (i = 2; i + k - 1 <= n; i++)
    {
        temp -= vec[i - 1];
        temp += vec[i + k - 1];
        if (temp < min)
        {
            min = temp;
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}