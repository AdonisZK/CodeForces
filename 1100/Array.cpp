#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, input;
    deque<int> pos, neg, zero;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input > 0)
        {
            pos.push_back(input);
        }
        else if (input < 0)
        {
            neg.push_back(input);
        }
        else if (input == 0)
        {
            zero.push_back(input);
        }
    }

    if (pos.size() == 0 && neg.size() > 2)
    {
        pos.push_back(neg[0]);
        pos.push_back(neg[1]);
        neg.pop_front();
        neg.pop_front();
    }
    if (neg.size() % 2 == 0 && neg.size() > 1)
    {
        zero.push_back(neg[0]);
        neg.pop_front();
    }
    cout << neg.size() << " ";
    for (auto &i : neg)
    {
        cout << i << " ";
    }
    cout << endl
         << pos.size() << " ";
    for (auto &i : pos)
    {
        cout << i << " ";
    }
    cout << endl
         << zero.size() << " ";
    for (auto &i : zero)
    {
        cout << i << " ";
    }
    return 0;
}