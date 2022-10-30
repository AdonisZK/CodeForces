#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, days[8];
    cin >> n;
    for (i = 1; i <= 7; i++)
    {
        cin >> days[i];
    }
    while (n > 0)
    {
        for (i = 1; i <= 7; i++)
        {
            n -= days[i];
            if (n <= 0)
            {
                cout << i << endl;
                exit(0);
            }
        }
    }
    return 0;
}
