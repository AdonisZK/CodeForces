#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0, temp[5];
    string n;
    vector<char> arr1, arr2;

    cin >> n;
    copy(n.begin(), n.end(), back_inserter(arr1));
    cin >> n;
    copy(n.begin(), n.end(), back_inserter(arr2));

    for (int i = 0; i < n.length(); i++)
    {
        if (arr1[i] != arr2[i])
        {
            temp[count] = i;
            count++;
            if (count > 2)
            {
                cout << "NO" << endl;
                exit(0);
            }
        }
    }

    if (count == 2)
    {
        iter_swap(arr1.begin() + temp[0], arr1.begin() + temp[1]);
    }

    if (arr1 == arr2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}