//! really proud bout' this one, very efficient time and memory

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int flag = 0, k, j, count = 0;
    char c, temp;
    list<char> str, ans;
    list<int> countArr;

    cin >> k;
    while (cin >> c)
    {
        str.push_back(c);
    }
    str.sort();

    for (auto &i : str)
    {
        if (flag == 0)
        {
            temp = i;
            flag = 1;
            count++;
            continue;
        }
        if (i == temp)
        {
            count++;
        }
        else if (i != temp)
        {
            countArr.push_back(count);
            count = 1;
            temp = i;
        }
    }
    countArr.push_back(count);
    str.unique();

    for (auto &i : countArr)
    {
        if (i % k != 0)
        {
            cout << "-1" << endl;
            exit(0);
        }
        else
        {
            count = i / k;
            temp = str.front();
            for (j = 0; j < count; j++)
            {
                ans.push_back(temp);
            }
            str.pop_front();
        }
    }

    for (j = 0; j < k; j++)
    {
        for (auto &i : ans)
        {
            cout << i;
        }
    }
    return 0;
}