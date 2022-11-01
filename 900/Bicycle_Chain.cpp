#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, max, maxCount;
    float n, m, temp, test;
    vector<float> arr1, arr2;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        arr1.insert(arr1.begin() + i, temp);
    }
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        arr2.insert(arr2.begin() + i, temp);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (std::fmod(arr2[i] / arr1[j], 1.0) == 0)
            {
                // cout << arr2[i] << "/" << arr1[j] << endl;
                if (i == 0 && j == 0)
                {
                    max = arr2[i] / arr1[j];
                    maxCount = 1;
                }
                else if (arr2[i] / arr1[j] > max)
                {
                    max = arr2[i] / arr1[j];
                    maxCount = 1;
                }
                else if (arr2[i] / arr1[j] == max)
                {
                    maxCount++;
                }
            }
        }
    }

    cout << maxCount << endl;

    return 0;
}
