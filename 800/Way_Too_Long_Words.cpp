#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str.length() > 10)
        {
            str = str[0] + to_string(str.length() - 2) + str.back();
        }
        cout << str << endl;
    }
    return 0;
}
