#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, left = 0, right = 0;
    vector<int> arr1, arr2;
    char c;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        arr1.push_back(int(c) - 48);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        arr2.push_back(int(c) - 48);
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[i])
        {
            // cout << "left : " << arr1[i] << " > " << arr2[i] << endl;
            left++;
        }
        else if (arr1[i] < arr2[i])
        {
            // cout << "right : " << arr1[i] << " < " << arr2[i] << endl;
            right++;
        }
        else
        {
            cout << "NO" << endl;
            exit(0);
            // cout << "break : " << arr1[i] << " == " << arr2[i] << endl;
            // if (left != 0 || right != 0)
            // {

            //     cout << "NO" << endl;
            //     exit(0);
            // }
        }
    }

    if (left != 0 && right == 0)
    {
        cout << "YES" << endl;
    }
    else if (left == 0 && right != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}