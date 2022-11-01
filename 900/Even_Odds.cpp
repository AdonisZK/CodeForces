#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, k, ans;
    cin >> n >> k;

    if (k <= n - n / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else if (k > n - n / 2)
    {
        cout << (k - (n - n / 2)) * 2 << endl;
    }

    return 0;
}
