#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int l_idx = lower_bound(v.begin(), v.end(), l) - v.begin();
        int r_idx = (upper_bound(v.begin(), v.end(), r) - v.begin()) - 1;

        int ans;

        if (l_idx == n)
            ans = 0;
        else if (r_idx == n)
            ans = r_idx - l_idx;
        else
            ans = r_idx - l_idx + 1;

        cout << ans << " ";
    }

    return 0;
}