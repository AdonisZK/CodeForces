#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double denominator, numerator = 0, temp;

    cin >> denominator;
    for (int i = 0; i < denominator; i++)
    {
        cin >> temp;
        numerator += temp;
    }
    numerator /= 100;
    cout << numerator / denominator * 100 << endl;

    return 0;
}
