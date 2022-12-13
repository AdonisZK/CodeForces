#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    long long input, cur = 1, count = 0;
    vector<int> vec;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
    sort(vec.begin(), vec.end());

    for (i = 0; i < n; i++)
    {
        count += std::abs(vec[i] - cur);
        cur++;
    }
    cout << count << endl;
    return 0;
}