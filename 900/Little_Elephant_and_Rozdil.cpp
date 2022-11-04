#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, input, min, flag = 0, location;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        if (i == 1 || input < min)
        {
            min = input;
            location = i;
            flag = 0;
        }
        else if (input == min)
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << location << endl;
    }
    else if (flag == 1)
    {
        cout << "Still Rozdil" << endl;
    }
    return 0;
}
