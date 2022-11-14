#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    list<char> str;

    while (cin >> c)
    {
        if (c != 'A' && c != 'O' && c != 'Y' && c != 'E' && c != 'U' && c != 'I' && c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
        {
            str.push_back(tolower(c));
        }
    }

    for (auto &i : str)
    {
        cout << "." << i;
    }
    return 0;
}