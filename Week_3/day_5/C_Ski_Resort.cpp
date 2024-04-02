/*
    author:mdnahidahmed2002
    date: 2024-04-01 15:54:23
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
    long long n, k, t;
    cin >> n >> k >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int r = 0;
    long long ans = 0;
    int cur_sz = 0;

    while (r < n)
    {

        if (a[r] <= t)
        {
            cur_sz++;
            r++;
            if (cur_sz >= k)
            {
                ans += (cur_sz - k) + 1;
            }
        }
        else
        {
            r = r + 1;
            cur_sz = 0;
        }
    }

    cout << ans << endl;
}