#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, nTemp, m, i, temp, ansMin = 0, ansMax = 0;
    vector<int> min, max;
    cin >> n >> m;
    nTemp = n;
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

    n = nTemp;

    for (auto &i : min)
    {
        if (n == 0)
        {
            break;
        }
        while (i != 0 && n != 0)
        {
            ansMin += i;
            i--;
            n--;
        }
    }

    cout << ansMax << " " << ansMin << endl;

    return 0;
}