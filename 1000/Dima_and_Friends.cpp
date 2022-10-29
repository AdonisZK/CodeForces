#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int friends, fingers = 0, ans = 0, temp;

    cin >> friends;

    for (int i = 0; i < friends; i++)
    {
        cin >> temp;
        fingers += temp;
    }
    for (int j = 1; j <= 5; j++)
    {
        if ((fingers + j) % (friends + 1) != 1)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
