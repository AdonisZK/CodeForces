#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, y, z, xans = 0, yans = 0, zans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        xans += x;
        yans += y;
        zans += z;
    }

    if (xans == 0 && yans == 0 && zans == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
