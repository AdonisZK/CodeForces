#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, i, temp, req, people[105], req[105], queue = 1;

    cin >> n;
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> req;
        people[queue] = req;
        queue++;
    }
    for (i = 1; i <= queue; i++)
    {
        temp = people[queue] - m;
        if (temp > 0)
        {
            // TODO change to double stack
            queue++;
        }
    }
    return 0;
}
