#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, ans = 0;
    string temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp[0] == '+' || temp[1] == '+' || temp[2] == '+')
        {
            ans++;
        }
        else if (temp[0] == '-' || temp[1] == '-' || temp[2] == '-')
        {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}
