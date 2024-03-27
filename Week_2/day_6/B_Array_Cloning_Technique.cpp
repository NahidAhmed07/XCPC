/*
    author:mdnahidahmed2002
    date: 2024-03-27 10:38:12
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
    int a[n];
    map<int, int> mp;
    int ue = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        ue = max(ue, mp[a[i]]);
    }

    int x = n - ue;
    int i = ue;
    int ans = 0;

    while (x > 0)
    {
        if (x <= i)
        {
            ans += x + 1;
        }
        else
        {
            ans += i + 1;
        }

        x -= i;
        i *= 2;
    }

    cout << ans << endl;
}