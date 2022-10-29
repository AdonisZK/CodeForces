#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, a = 0, b = 0, tempa, tempb, closed, opened = 0, diff, min;
    cin >> n;
    closed = n * 2;
    for (int i = 0; i < n; i++)
    {
        cin >> tempa >> tempb;
        if (tempa == 1)
        {
            a++;
        }
        if (tempb == 1)
        {
            b++;
        }
        closed = closed - (tempa + tempb);
        opened = opened + (tempa + tempb);
    }
    if (closed < opened)
    {
        min = closed;
    }
    else
    {
        min = opened;
    }
    if (a > b)
    {
        diff = (n - a) + b;
        if (diff < min)
        {
            min = diff;
        }
    }
    else if (b > a)
    {
        diff = (n - b) + a;
        if (diff < min)
        {
            min = diff;
        }
    }
    else
    {
        diff = 10005;
        if (diff < min)
        {
            min = diff;
        }
    }
    cout << min << endl;

    return 0;
}
