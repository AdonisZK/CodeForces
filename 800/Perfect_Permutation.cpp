#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 2;
    cin >> n;
    if (n == 1)
    {
        cout << "-1" << endl;
        exit(0);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << count << " ";
        if (i % 2 == 1)
        {
            count--;
        }
        else if (i % 2 == 0)
        {
            count += 3;
        }
    }
    return 0;
}
