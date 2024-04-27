#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long l = 1, r = 1e18, mid, ans;

    auto isOk = [&](long long mid)
    {
        long long total = 0;

        for (int i = 0; i < n; i++)
        {
            total += (mid / v[i]);
            if (total >= t)
                return true;
        }

        return false;
    };

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (isOk(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}