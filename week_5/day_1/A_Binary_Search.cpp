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

        bool found = false;
        int l = 0, r = n - 1, mid;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (v[mid] == k)
            {
                found = true;
                break;
            }
            else if (k < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}