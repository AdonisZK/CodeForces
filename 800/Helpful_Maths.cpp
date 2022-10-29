#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string n, ans = "";
    int countOne = 0, countTwo = 0, countThree = 0, flag = 0;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '1')
        {
            if (flag == 0)
            {
                ans += '1';
                flag = 1;
            }
            else
            {
                ans += '+';
                ans += '1';
            }
        }
        else if (n[i] == '2')
        {
            countTwo++;
        }
        else if (n[i] == '3')
        {
            countThree++;
        }
    }

    for (int i = 0; i < countTwo; i++)
    {
        if (flag == 0)
        {
            ans += '2';
            flag = 1;
        }
        else
        {
            ans += '+';
            ans += '2';
        }
    }

    for (int i = 0; i < countThree; i++)
    {
        if (flag == 0)
        {
            ans += '3';
            flag = 1;
        }
        else
        {
            ans += '+';
            ans += '3';
        }
    }

    cout << ans << endl;
    // cout << countOne << countTwo << countThree << endl;
    return 0;
}
