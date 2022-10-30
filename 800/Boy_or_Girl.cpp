#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int cntDistinct(string str)
{
    unordered_set<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }
    return s.size();
}

int main()
{
    string str;
    int diff;
    cin >> str;
    diff = cntDistinct(str);
    if (diff % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}