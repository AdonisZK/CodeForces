#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
int spf[100000 + 9];
int sieve(int N)
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

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    sieve(N);
    for (int i = 0; i < N; i++)
    {
        cout << spf[i] << endl;
    }

    return 0;
}