#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int n, k, i, j = 0, ans = 0, len, max = 0;
    long long int count[105] = {0};
    char result;
    string str;
    vector<long long int> maxCount;
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
            if (max < count[str[i]])
            {
                max = count[str[i]];
                result = str[i];
            }
        }

        k -= max;
        j++;
        if (k >= 0)
        {
            maxCount.push_back(max);
        }
        else
        {
            max = max + k;
            maxCount.push_back(max);
        }

        str.erase(remove(str.begin(), str.end(), result), str.end());
    }

    for (int i = 0; i < maxCount.size(); i++)
    {
        ans = ans + (maxCount[i] * maxCount[i]);
    }
    cout << ans << endl;
    return 0;
}
