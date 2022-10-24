#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    char input;
    int n, t, i, j;

    cin >> n >> t;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        s += input;
    }
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < s.length(); j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
