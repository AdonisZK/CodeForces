#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string input1, input2;
    vector<char> rev;

    cin >> input1 >> input2;

    for (int i = 0; i < input1.size(); i++)
    {
        rev.insert(rev.begin(), input1[i]);
    }

    string ans(rev.begin(), rev.end());

    if (ans == input2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}