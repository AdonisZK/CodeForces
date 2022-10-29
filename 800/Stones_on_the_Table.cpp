#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int n, count = 0;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
