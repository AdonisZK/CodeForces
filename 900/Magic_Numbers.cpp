#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str, str144 = "", str14 = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (i + 2 < str.length())
        {

            str144 += str[i];
            str144 += str[i + 1];
            str144 += str[i + 2];
        }
        if (i + 1 < str.length())
        {
            str14 += str[i];
            str14 += str[i + 1];
        }
        if (str144 == "144")
        {
            i += 2;
        }
        else if (str14 == "14")
        {
            i++;
        }
        else if (str[i] == '1')
        {
        }
        else
        {
            cout << "NO" << endl;
            exit(0);
        }
        str144 = "";
        str14 = "";
    }
    cout << "YES" << endl;
    return 0;
}