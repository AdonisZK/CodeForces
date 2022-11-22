#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, left = 0, right = 0;
    vector<int> arr1, arr2;
    char c;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        arr1.push_back(int(c) - 48);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        arr2.push_back(int(c) - 48);
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (auto i : arr1)
    {
        cout << i << "";
    }
    cout << endl;
    for (auto i : arr2)
    {
        cout << i << "";
    }
    return 0;
}