#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char n;
    while (cin >> n)
    {
        if (n == 'H' || n == 'Q' || n == '9')
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
    return 0;
}
