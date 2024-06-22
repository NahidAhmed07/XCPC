#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int need = n - 1;
    int mx_time = 2 * 5 * 1e8;
    int ans;

    auto isOk = [&](long long mid)
    {
        return (mid / x + mid / y) >= need;
    };

    int l = 0, r = mx_time, mid;
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

    cout << ans + min(x, y);

    return 0;
}