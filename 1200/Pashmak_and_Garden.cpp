#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x1, y1, x2, y2, distx, disty;
    cin >> x1 >> y1 >> x2 >> y2;
    distx = x2 - x1;
    disty = y2 - y1;
    if (std::abs(distx) == std::abs(disty))
    {
        cout << x1 << " " << y2 << " ";
        cout << x2 << " " << y1;
    }
    else if (distx == 0)
    {
        cout << x1 + disty << " " << y1 << " ";
        cout << x1 + disty << " " << y2;
    }
    else if (disty == 0)
    {
        cout << x1 << " " << y1 + distx << " ";
        cout << x2 << " " << y1 + distx;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}