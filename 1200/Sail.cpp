#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n, xi, yi, xd, yd, xtravel, ytravel, time = 0;
    char direction;
    cin >> n >> xi >> yi >> xd >> yd;

    xtravel = xd - xi;
    ytravel = yd - yi;

    for (int i = 0; i < n; i++)
    {
        cin >> direction;
        if (direction == 'N' && ytravel != 0)
        {
            if (ytravel > 0)
            {
                ytravel -= 1;
            }
        }
        else if (direction == 'S' && ytravel != 0)
        {
            if (ytravel < 0)
            {
                ytravel += 1;
            }
        }
        else if (direction == 'E' && xtravel != 0)
        {
            if (xtravel > 0)
            {
                xtravel -= 1;
            }
        }
        else if (direction == 'W' && xtravel != 0)
        {
            if (xtravel < 0)
            {
                xtravel += 1;
            }
        }
        time++;
        if (xtravel == 0 && ytravel == 0)
        {
            break;
        }
    }
    if (xtravel == 0 && ytravel == 0)
    {
        cout << time << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}