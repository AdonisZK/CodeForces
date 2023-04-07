// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
using namespace std::chrono;

void solve(int maks, vector<pair<long long int, pair<long long int, long long int>>> &v)
{
    long long int buff, count = 0;
    for (int n = 1; n <= 64; n++)
    {
        for (int m = 0; m < n; m++)
        {
            buff = pow(2, m) + pow(2, n) / 3;
            if (buff > 0)
                v.push_back(make_pair(buff, make_pair(m, n)));
            count++;
        }
    }
    cout << count << endl;
    sort(v.begin(), v.end());
}

int main()
{

    vector<int> values(10000);

    // Generate Random values
    auto f = []() -> int
    { return rand() % 10000; };

    // Fill up the vector
    generate(values.begin(), values.end(), f);

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    // Call the function, here sort()
    sort(values.begin(), values.end());

    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);

    int t, maks = 0, k;
    vector<pair<long long int, pair<long long int, long long int>>> v;
    vector<int> store;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> k;
        store.push_back(k);
        maks = max(maks, k);
    }
    solve(maks, v);

    for (auto &i : store)
    {
        cout << v[i - 1].second.first
             << " " << v[i - 1].second.second << endl;
    }

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;
}