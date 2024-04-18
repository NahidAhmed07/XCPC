/*
    author:mdnahidahmed2002
    date: 2024-04-18 23:30:59
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
    int n, msb = 0;
    cin >> n;

    for (int i = 0; i < 30; i++)
    {
        if ((n >> i) & 1)
        {
            msb = i;
        }
    }

    cout << (1 << msb) - 1 << "\n";
}