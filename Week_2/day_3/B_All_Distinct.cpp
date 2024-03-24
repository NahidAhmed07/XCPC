/*
    author:mdnahidahmed2002
    date: 2024-03-24 17:34:04
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
    set<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    int m = a.size();
    int ans;
    if (n == m)
    {
        ans = n;
    }
    else if ((n - m) % 2 == 1)
    {
        ans = m - 1;
    }
    else
    {
        ans = m;
    }

    cout << ans << "\n";
}