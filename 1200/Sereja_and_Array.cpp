#define MOD 1000000007

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, input, input2, input3, storedAdd = 0;
    vector<int> v;
    cin >> n;
    cin >> m;
    v.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        cin >> input2;
        if (input == 1)
        {
            cin >> input3;
            v[input2] = input3 - storedAdd;
        }
        else if (input == 2)
        {
            storedAdd += input2;
        }
        else if (input == 3)
        {
            cout << v[input2] + storedAdd << endl;
        }
    }
    return 0;
}