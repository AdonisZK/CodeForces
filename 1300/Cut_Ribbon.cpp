#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c, i, count = 0, current;
    cin >> n >> a >> b >> c;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin(), vec.end());

    while (n > 0)
    {
        if (n % vec[0] == 0)
        {
            count = n / vec[0];
            cout << count << endl;
            exit(0);
        }
        for (i = 0; current - vec[1] > 0; i++)
        {
            current = n - vec[1] * i;
            if (current % vec[0] == 0)
            {
                count = (current / vec[0]) + count;
                cout << count << endl;
                exit(0);
            }
            count++;
        }
        // for (i = 0; current - vec[2] > 0; i++)
        // {
        //     current = n - vec[2] * i;
        //     if (current % vec[0] == 0)
        //     {
        //         cout << current / vec[0] << " : " << count << endl;
        //         count = (current / vec[0]) + count;
        //         cout << count << endl;
        //         exit(0);
        //     }
        //     count++;
        // }
    }
    return 0;
}