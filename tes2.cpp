#include <bits/stdc++.h>

using namespace std;

int main()
{
    string data, dataSearch;
    string strcari = "was";
    freopen("input.txt", "r", stdin);

    int jkata = 0;

    while (cin >> dataSearch)
    {
        if (dataSearch == "-")
        {
            cout << endl;
        }
        else
        {
            cout << dataSearch << " ";
        }

        if (dataSearch == strcari)
        {
            jkata = jkata + 1;
        }
    }
    cout << endl
         << endl
         << " jumlah kata yang ditemukan " << jkata << endl;

    return 0;
}