#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, i, temp, count = 0, flag = 0;
    vector<int> arr, arr2;

    cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
        arr2.push_back(temp);
    }

    while (flag != 1)
    {
        if (count > 0)
        {
            if (arr == arr2 || count >= k || k == 1)
            {
                cout << "-1" << endl;
                exit(0);
            }
        }
        if (adjacent_find(arr.begin(), arr.end(), not_equal_to<>()) == arr.end())
        {
            cout << count << endl;
            exit(0);
        }
        else
        {
            count++;
        }
        temp = arr[k - 1];
        arr.erase(arr.begin());
        arr.push_back(temp);

        // for (int j : arr)
        //     cout << j << ' ';
        // cout << endl;
    }

    return 0;
}