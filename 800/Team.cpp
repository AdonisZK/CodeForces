#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, temp1, temp2, temp3, checker = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2 >> temp3;
        checker = temp1 + temp2 + temp3;
        if (checker >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
