#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int k;
        cin >> k;

        int l = 0, r = n - 1, mid;
        int idx = n + 1;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (k == v[mid])
            {

                r = mid - 1;
            }
            else if (k < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }

            if (v[mid] >= k && (mid + 1) < idx)
            {

                idx = mid + 1;
            }
        }

        cout << idx << endl;
    }

    return 0;
}