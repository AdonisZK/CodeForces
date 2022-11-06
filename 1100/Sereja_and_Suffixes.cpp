#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, input, i, count = 0, arr[100005];
    vector<int> reverse;
    unordered_set<int> checker;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        reverse.push_back(input);
    }

    for (i = reverse.size() - 1; i >= 0; i--)
    {
        if (checker.count(reverse[i]))
        {
            arr[i + 1] = count;
        }
        else
        {
            checker.insert(reverse[i]);
            count++;
            arr[i + 1] = count;
        }
    }

    for (i = 1; i <= m; i++)
    {
        cin >> input;
        cout << arr[input] << endl;
    }

    return 0;
}