#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    cin >> n;

    if (n[0] >= 97 && n[0] <= 122)
    {
        n[0] = n[0] - 32;
    }

    cout << n << endl;

    return 0;
}
