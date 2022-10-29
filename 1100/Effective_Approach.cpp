#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, num, elements, query, search;
    long long scoreV = 0, scoreP = 0;
    cin >> elements;
    vector<int> arr(100001);

    for (i = 1; i <= elements; i++)
    {
        cin >> num;
        arr[num] = i;
    }
    cin >> query;
    while (query != 0)
    {
        cin >> search;
        scoreV += arr[search];
        scoreP += (elements - arr[search]) + 1;
        query--;
    }
    cout << scoreV << " " << scoreP << endl;
    return 0;
}
