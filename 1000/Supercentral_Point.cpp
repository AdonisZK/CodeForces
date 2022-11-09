#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int query, x[205], y[205], i, j, ans = 0, xmin, xplus, ymin, yplus, count = 0;
    cin >> query;

    for (i = 0; i < query; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (i = 0; i < query; i++)
    {
        xmin = xplus = ymin = yplus = 0;
        for (j = 0; j < query; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (x[i] < x[j] && y[i] == y[j])
            {
                xmin = 1;
            }
            else if (x[i] > x[j] && y[i] == y[j])
            {
                xplus = 1;
            }
            else if (x[i] == x[j] && y[i] < y[j])
            {
                ymin = 1;
            }
            else if (x[i] == x[j] && y[i] > y[j])
            {
                yplus = 1;
            }
            if (xmin + xplus + ymin + yplus == 4)
            {
                break;
            }
        }
        if (xmin + xplus + ymin + yplus == 4)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
