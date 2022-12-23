#include <bits/stdc++.h>
using namespace std;

int kanade(vector<int> &vect, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + vect[i];
        max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    vector<int> vect;
    int n, i, input;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        vect.push_back(input);
    }
    // Function Call
    int max_sum = kanade(vect, vect.size());
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}