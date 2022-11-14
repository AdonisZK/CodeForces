#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    string search = "hello";
    char n;
    list<char> str;

    while (cin >> n)
    {
        if (n == search[count])
        {
            str.push_back(n);
            count++;
            if (count == 5)
            {
                cout << "YES" << endl;
                exit(0);
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}