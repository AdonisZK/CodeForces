#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, i, j, inputP, inputT, rank = 0, count = 1;
    vector<pair<int, int>> arr;

    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> inputP >> inputT;
        arr.push_back(make_pair(inputP, inputT));
    }

    sort(arr.begin(), arr.end(),
         [](auto &x, auto &y)
         {
             if (x.first != y.first)
             {
                 return x.first > y.first;
             }

             return x.second < y.second;
         });

    for (i = 1; i <= n; i++)
    {

        if (i == k)
        {
            for (j = i; j < n; j++)
            {
                if (arr[j].first == arr[i - 1].first && arr[j].second == arr[i - 1].second)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            cout << count << endl;
            exit(0);
        }
        if (arr[i].first == arr[i - 1].first && arr[i].second == arr[i - 1].second)
        {
            count++;
        }
        else
        {
            count = 1;
        }
    }
    return 0;
}