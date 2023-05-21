#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;

vector<int> primes, spf(N);
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == 0)
            spf[i] = i, primes.push_back(i);
        for (int j = 0; j < primes.size() && i * primes[j] < N && primes[j] <= spf[i]; j++)
        {
            spf[i * primes[j]] = primes[j];
        }
    }
}

int main()
{
    sieve();
    for (auto &i : primes)
    {
        cout << i << " ";
    }

    return 0;
}
