#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int initial_time = min(x, y);
    int need = n - 1;
    int ans;

    auto ok = [&](int mid)
    {
        return ((mid / x) + (mid / y)) >= need;
    };

    int l = 1, r = 2 * 1000000, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans + initial_time << endl;

    return 0;
}