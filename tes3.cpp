#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    string data, dataSearch, x;
    ifstream myFile;
    string strcari = "was";
    myFile.open("text.txt", ios::in);
    int jkata = 0;

    myFile.open("input.txt");
    if (!myFile)
    {
        cout << "Unable to open file";
        exit(0);
    }

    while (getline(myFile, x))
    {
        cout << x << endl;
    }

    myFile.close();

    while (cin >> dataSearch)
    {
        
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