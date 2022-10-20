#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, i, req, queue[1000], want[105], q, latest;

    cin >> n;
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> req;
        queue[i] = i;
        want[i] = req;
    }
    q = n;
    for (i = 1; i <= q; i++)
    {
        req = want[i] - m;
        // cout << "antrian : " << i << " masih mau : " << req << endl;
        if (req > 0)
        {
            q++;
            queue[q] = queue[i];
            want[q] = req;
            // cout << "orang : " << queue[q] << " antrian : " << i << " kebelakang : " << q << endl;
        }
        latest = queue[q];
    }
    cout << latest << endl;
    return 0;
}
