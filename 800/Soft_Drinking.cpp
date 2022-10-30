#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, l, c, d, p, nl, np, min, temp;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    //! toast1
    temp = k * l / nl;
    min = temp;
    //! toast2
    temp = c * d;
    if (temp < min)
    {
        min = temp;
    }
    //! toast 3
    temp = p / np;
    if (temp < min)
    {
        min = temp;
    }

    cout << min / n << endl;
    return 0;
}
