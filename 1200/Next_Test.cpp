#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, input, count = 1;
    vector<int> vect;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        vect.push_back(input);
    }
    sort(vect.begin(), vect.end());
    for (auto &i : vect)
    {
        if (i != count)
        {
            cout << count << endl;
            exit(0);
        }
        count++;
    }
    cout << count << endl;
    return 0;
}