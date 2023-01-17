#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
int spf[100000 + 9];
int sieve(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (spf[i] == 0)
            spf[i] = i, primes.push_back(i);
        int sz = primes.size();
        for (int j = 0; j < sz && i * primes[j] < n && primes[j] <= spf[i]; j++)
        {
            spf[i * primes[j]] = primes[j];
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    sieve(n);
    for (int i = 1; i <= n; i++)
    {
        if (spf[i] == i)
            cout << spf[i] << endl;
    }

    return 0;
}