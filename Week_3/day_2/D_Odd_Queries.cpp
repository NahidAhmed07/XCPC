/*
    author:mdnahidahmed2002
    date: 2024-03-30 18:58:59
*/

#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    long long pref[n + 1];
    pref[0] = 0;
    long long x;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    while (q--)
    {
        long long l, r, k;
        cin >> l >> r >> k;

        long long total_sum = pref[l - 1] + (pref[n] - pref[r]) + (k * (r - l + 1));
        if (total_sum % 2 == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}