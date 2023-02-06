#define MOD 1000000007

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

int main(int argc, char const *argv[])
{
    sieve();
    long long n, input;
    double tprime;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        tprime = sqrt(input);
        if (spf[(long long)(tprime)] == ceil(tprime))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}