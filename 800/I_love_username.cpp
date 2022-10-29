#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, temp, min, max, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (i == 0)
        {
            min = temp;
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
            ans++;
        }
        if (temp > max)
        {
            max = temp;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
