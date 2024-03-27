/*
    author:mdnahidahmed2002
    date: 2024-03-27 09:08:22
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
    char r1[n], r2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> r2[i];
    }

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (r1[i] == 'R' && r2[i] != 'R')
        {
            flag = false;
        }
        else if ((r1[i] == 'B' || r1[i] == 'G') && r2[i] == 'R')
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}