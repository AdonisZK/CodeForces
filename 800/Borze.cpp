#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '.')
        {
            cout << "0";
        }
        else if (n[i] == '-' && n[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else if (n[i] == '-' && n[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
    }
    return 0;
}
