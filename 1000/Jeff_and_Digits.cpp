#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int query;
    char input;
    string ans;

    cin >> query;
    for (int i = 0; i < query; i++)
    {
        cin >> input;
        ans += input;
        if (stoi(ans) % 90 != 0)
        {
            
        }
    }

    cout << stoi(ans) << endl;
    return 0;
}
