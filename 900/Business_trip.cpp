#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int k, i, temp, count = 0;
    priority_queue<int> arr;

    cin >> k;
    for (i = 0; i < 12; i++)
    {
        cin >> temp;
        arr.push(temp);
    }

    while (k > 0)
    {

        temp = arr.top();
        k -= temp;
        arr.pop();
        count++;
        if (count > 12)
        {
            cout << "-1" << endl;
            exit(0);
        }
    }

    cout << count << endl;
    return 0;
}