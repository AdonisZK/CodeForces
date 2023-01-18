#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 9;

int spf[N];
vector<int> primes;
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == 0)
            spf[i] = i, primes.push_back(i);
        int sz = primes.size();
        for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++)
        {
            spf[i * primes[j]] = primes[j];
        }
    }
}

int32_t main()
{
    time_t start, end;
    time(&start);
    sieve();
    for (int i = 0; i < 50; i++)
    {
        cout << spf[i] << endl;
    }

    time(&end);

    // Calculating total time taken by the program.
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}