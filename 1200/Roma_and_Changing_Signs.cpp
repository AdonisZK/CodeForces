#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, input, ans = 0, flag = 0;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
        if (input < 0)
        {
            flag++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (flag == 0 && k % 2 == 1 && k > 0)
        {
            if (i == 0)
            {
                ans -= v[i];
            }
            else
            {
                ans += v[i];
            }
            k--;
        }
        else if (flag == 0 && k % 2 == 0 || k == 0)
        {
            ans += v[i];
        }
        else if (flag > 0)
        {
            ans += std::abs(v[i]);
            flag--;
            k--;
        }
    }
    cout << ans << endl;
    return 0;
}