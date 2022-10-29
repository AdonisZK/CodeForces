#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c, d;
    cin >> n;
    while (!NULL)
    {
        n += 1;
        d = n % 10;
        c = (n / 10) % 10;
        b = (n / 100) % 10;
        a = (n / 1000) % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << a << b << c << d << endl;
    return 0;
}
