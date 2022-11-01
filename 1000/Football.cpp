#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, countA = 0, countB = 0;
    string input, teamA, teamB;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (i == 0)
        {
            teamA = input;
            countA++;
        }
        if (input == teamA)
        {

            countA++;
        }
        else
        {
            teamB = input;
            countB++;
        }
    }

    if (countA > countB)
    {
        cout << teamA << endl;
    }
    else
    {
        cout << teamB << endl;
    }
    return 0;
}
