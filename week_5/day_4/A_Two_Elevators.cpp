/*
    author:mdnahidahmed2002
    date: 2024-04-22 23:24:19
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
    int a, b, c;
    cin >> a >> b >> c;

    int x = a - 1;

    int y = abs(c - b) + c - 1;
    int ans = 3;
    if (x < y)
        ans = 1;
    else if (y < x)
        ans = 2;
    cout << ans << endl;
}