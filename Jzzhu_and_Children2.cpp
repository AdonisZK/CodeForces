#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double n, i, noMax, req, m, max;

    cin >> n;
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> req;
        if (i == 1)
        {
            noMax = i;
            max = req / m;
        }
        if (ceil(req / m) >= ceil(max))
        {
            noMax = i;
            max = req / m;
        }
        // cout << "max : " << max << endl;
    }
    cout << noMax << endl;
    return 0;
}
