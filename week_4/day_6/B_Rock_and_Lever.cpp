/*
    author:mdnahidahmed2002
    date: 2024-04-17 23:33:02
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

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[__lg(x)]++;
    }

    long long ans = 0;

    for (auto y : mp)
    {
        int cnt = y.second;

        ans += (1LL * cnt * (cnt - 1)) / 2;
    }

    cout << ans << endl;
}