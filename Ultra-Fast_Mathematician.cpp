#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1, str2, strAns, strTemp;

    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[i])
        {
            strTemp = '0';
        }
        else
        {
            strTemp = '1';
        }
        strAns += strTemp;
    }

    cout << strAns << endl;
    return 0;
}