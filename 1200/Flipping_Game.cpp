#include <bits/stdc++.h>
using namespace std;

int kanade(vector<int> &vect, int size, int *start, int *end)
{
    int max_so_far = INT_MIN, max_ending_here = 0, s = 0, temp, count = 0, realCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (vect[i] == 0)
        {
            temp = 1;
        }
        else if (vect[i] == 1)
        {
            temp = -1;
            count++;
        }
        max_ending_here += temp;

        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            *start = s;
            *end = i;
            realCount = count;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
            count = 0;
        }
    }
    return max_so_far + realCount;
}

int main()
{
    vector<int> vect;
    int n, i, input, start = 0, end = 0, max_flip, max_exflip = 0, flag = 0;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 0)
        {
            flag = 1;
        }
        vect.push_back(input);
    }

    if (flag == 0)
    {
        cout << vect.size() - 1 << endl;
        exit(0);
    }

    max_flip = kanade(vect, vect.size(), &start, &end);

    for (i = 0; i < n; i++)
    {
        if (i >= start && i <= end)
        {
            continue;
        }
        max_exflip += vect[i];
    }

    cout << max_exflip + max_flip << endl;
    // cout << "Maximum contiguous sum is " << max_flip << endl
    //      << "Max exclude flip " << max_exflip << endl
    //      << "Starting index " << start << endl
    //      << "Ending index " << end << endl;
    return 0;
}