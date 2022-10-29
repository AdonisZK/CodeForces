#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, max, exit, enter, current = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> exit >> enter;
        current = current - exit + enter;
        if (i == 0)
        {
            max = enter;
        }
        if (current > max)
        {
            max = current;
        }
    }
    cout << max << endl;
    return 0;
}
