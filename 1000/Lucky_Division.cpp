#define MOD 1000000007

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, flag = 0;
    string s;
    char input;
    vector<char> v;
    while (cin >> input)
    {
        s += input;
        v.push_back(input);
    }
    n = std::stoi(s);

    for (auto &i : v)
    {
        if (i != '7' && i != '4')
        {
            flag = 1;
        }
    }

    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 ||
        n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0 || flag == 0)
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }

    if (flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
