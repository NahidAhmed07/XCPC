/*
    author:mdnahidahmed2002
    date: 2024-04-15 08:46:31
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

    vector<int> v(n);

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        x = x ^ v[i];
    }

    int ans = x;

    for (int i = 0; i < n; i++)
    {
        ans = min(ans, (x ^ v[i]));
    }

    cout << ans << endl;
}