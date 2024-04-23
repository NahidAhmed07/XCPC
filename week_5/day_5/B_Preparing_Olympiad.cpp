#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        int setBit = 0;

        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1 == 1)
            {
                sum += v[k];
                mx = max(mx, v[k]);
                mn = min(mn, v[k]);
                setBit++;
            }
        }

        if (setBit >= 2 && sum >= l && sum <= r && (mx - mn) >= x)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}