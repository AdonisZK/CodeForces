#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;

    if (a == b || a == c || a == d)
    {
        count++;
    }
    if (b == c || b == d)
    {
        count++;
    }
    if (c == d)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}
