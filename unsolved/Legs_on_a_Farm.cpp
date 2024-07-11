/*
    author:mdnahidahmed2002
    date: 2024-05-08 20:36:13
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

    cout << (n / 4) + (n % 4 > 0 ? 1 : 0) << endl;
}