#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, i, j = 0, ans = 0, len, max = 0;
    int count[105] = {0};
    char result;
    string str;
    vector<int> maxCount;
    cin >> n >> k;
    cin >> str;

    while (k > 0)
    {
        len = str.length();
        max = 0;
        for (i = 65; i <= 90; i++)
        {
            count[i] = 0;
        }
        for (i = 0; i < len; i++)
        {
            count[str[i]]++;
            // cout << str[i] << " : " << count[str[i]] << endl;
            if (max < count[str[i]])
            {
                max = count[str[i]];
                result = str[i];
            }
        }

        k -= max;
        cout << k << endl;
        j++;
        if (k > 0)
        {
            cout << "max : " << max << endl;
            maxCount.push_back(max);
        }
        else
        {
            max = max + k;
            cout << "max : " << max << endl;
            maxCount.push_back(max);
        }

        str.erase(remove(str.begin(), str.end(), result), str.end());
    }

    for (int i = 0; i < maxCount.size(); i++)
    {

        ans = ans + (maxCount[i] * maxCount[i]);
        cout << maxCount[i] << " : " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
