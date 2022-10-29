#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
        exit(0);
    }
    cout << "NO" << endl;

    return 0;
}
