#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    int smol = 0, big = 0;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] >= 65 && n[i] <= 90)
        {
            //! big
            big++;
        }
        else if (n[i] >= 97 && n[i] <= 122)
        {
            //! smol
            smol++;
        }
    }

    if (big > smol)
    {
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] >= 97 && n[i] <= 122)
            {
                n[i] = n[i] - 32;
            }
        }
    }
    else if (smol >= big)
    {
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] >= 65 && n[i] <= 90)
            {
                n[i] = n[i] + 32;
            }
        }
    }

    cout << n << endl;

    return 0;
}
