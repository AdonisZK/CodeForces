#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arrPrime = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < arrPrime.size(); i++)
    {
        if (n == arrPrime[i] && m == arrPrime[i + 1])
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;

    return 0;
}
