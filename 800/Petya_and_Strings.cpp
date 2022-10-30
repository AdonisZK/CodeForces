#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string n, n2;
    int flag;

    cin >> n >> n2;

    for (int i = 0; i < n.length(); i++)
    {
        if (tolower(n[i]) == tolower(n2[i]))
        {
            flag = 0;
        }
        else if (tolower(n[i]) < tolower(n2[i]))
        {
            cout << "-1" << endl;
            exit(0);
        }
        else if (tolower(n[i]) > tolower(n2[i]))
        {
            cout << "1" << endl;
            exit(0);
        }
    }
    cout << flag << endl;
    return 0;
}
