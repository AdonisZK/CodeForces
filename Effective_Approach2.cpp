#include <iostream>
#include <vector>

using namespace std;

int main()
{
    short i, j, elements, query, scoreV = 0, scoreP = 0, temp;
    cin >> elements;
    vector<short> arr(100001);
    vector<short> search(100001);

    for (i = 1; i <= elements; i++)
    {
        cin >> arr[i];
    }
    cin >> query;

    for (i = 1; i <= query; i++)
    {
        temp = 1;
        cin >> search[query];
        for (j = 1; j <= elements; j++)
        {
            if (arr[j] == search[query])
            {
                scoreV += j;
                break;
            }
        }
        for (j = elements; j > 0; j--)
        {
            if (arr[j] == search[query])
            {
                scoreP += temp;
                break;
            }
            temp++;
        }
    }
    cout << scoreV << " " << scoreP << endl;

    return 0;
}
