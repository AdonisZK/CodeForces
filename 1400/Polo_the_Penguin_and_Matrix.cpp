#include <bits/stdc++.h>
using namespace std;

int median(vector<int> &v)
{
    size_t n = v.size() / 2;
    nth_element(v.begin(), v.begin() + n, v.end());
    return v[n];
}

int main(int argc, char const *argv[])
{
    int n, m, d, i, input, temp, med, ans = 0;
    vector<int> vect;
    cin >> n >> m >> d;
    for (i = 0; i < n * m; i++)
    {
        cin >> input;
        vect.push_back(input);
        if (i == 0)
        {
            temp = input % d;
            continue;
        }
        if (input % d != temp)
        {
            cout << "-1" << endl;
            exit(0);
        }
    }
    sort(vect.begin(), vect.end());

    med = median(vect);
    for (auto &i : vect)
    {
        ans = ans + std::abs(i - med);
    }
    cout << ans / d << endl;

    return 0;
}