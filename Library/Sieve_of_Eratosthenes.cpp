#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;

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
    sieve();
    for (int i = 0; i < 50; i++)
    {
        cout << spf[i] << endl;
    }

    return 0;
}