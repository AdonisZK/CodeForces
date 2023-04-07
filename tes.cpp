#include <iostream>
using namespace std;

struct fullname
{
    string firstname;
    string lastname;
};

struct data
{
    fullname name;
    int uts, uas;
    float final;
};

data theStudent[10];

int main()
{
    int n, i, flag = 0;
    string input;
    bool found = false;
    cout << "Jumlah mahasiswa: ";
    cin >> n;

    cout << "Data mahasiswa" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << "Nama depan: ";
        cin >> theStudent[i].name.firstname;
        cout << "Nama belakang: ";
        cin >> theStudent[i].name.lastname;
        cout << "Nilai UTS: ";
        cin >> theStudent[i].uts;
        cout << "Nilai UAS: ";
        cin >> theStudent[i].uas;
        cout << endl;
    }

    cout << endl;
    cout << "\n=========================\n";
    cout << "Input nama depan mahasiswa: ";
    cin >> input;

    for (int i = 0; i < n; i++)
    {
        if (input == theStudent[i].name.firstname || input == theStudent[i].name.lastname)
        {
            theStudent[i].final = (0.4 * theStudent[i].uts) + (0.6 * theStudent[i].uas);

            cout << "Nama mahasiswa: " << theStudent[i].name.firstname << " " << theStudent[i].name.lastname << endl;
            cout << "Nilai UTS: " << theStudent[i].uts << endl;
            cout << "Nilai UAS: " << theStudent[i].uas << endl;
            cout << "Nilai Akhir: " << theStudent[i].final << endl;
            cout << endl;
            flag == 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Input tidak valid" << endl;
    }
    getchar();
    return 0;
}