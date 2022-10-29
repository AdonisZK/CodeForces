#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int query, n, min, max, minCount = 0, maxCount = 0, minPos, maxPos, ans = 0;

    cin >> query;
    for (int i = 0; i < query; i++)
    {
        cin >> n;
        if (n < min || i == 0)
        {
            min = n;
            minCount = 1;
            minPos = i;
        }
        else if (n == min)
        {
            minPos = i;
        }
        if (n > max || i == 0)
        {
            max = n;
            maxCount = 1;
            maxPos = i;
        }
        // else if (n == max)
        // {
        //     maxCount++;
        //     maxPos = i;
        // }
    }
    min = std::abs(query - minPos - 1);
    max = maxPos;
    ans = min + max;
    if (minPos < maxPos)
    {
        ans -= 1;
    }

    cout << ans << endl;

    return 0;
}
