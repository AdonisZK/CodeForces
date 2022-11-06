#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, temp;
    unordered_set<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.insert(temp);
    }

    for (auto const &i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
