#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, input, flag = 0, s, e, s2, e2;
    vector<int> v;
    cin >> n;
    v.push_back(INT_MIN);
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        v.push_back(input);
        if (input < v[i - 1] && flag == 0)
        {
            flag = 1;
            s = i - 1;
            e = i;
        }
        else if (input < v[i - 1] && flag == 1)
        {
            e++;
        }
        else if (input > v[i - 1] && flag == 1)
        {
            if (input > v[s] && v[e] > v[s - 1])
            {
                flag = 2;
                s2 = s;
                e2 = e;
            }
            else
            {
                cout << "no" << endl;
                exit(0);
            }
        }
        else if (input < v[i - 1] && flag == 2)
        {
            cout << "no" << endl;
            exit(0);
        }
    }
    if (flag == 0)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else if (flag == 1 && v[e] > v[s - 1])
    {
        cout << "yes" << endl;
        cout << s << " " << e << endl;
    }
    else if (flag == 2 && v[e] > v[s - 1])
    {
        cout << "yes" << endl;
        cout << s2 << " " << e2 << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}