/*
    author:mdnahidahmed2002
    date: 2024-04-18 11:41:01
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

    int x;
    cin >> x;

    pair<int, int> ans;
    int max_dif = INT_MAX;

    for (int i = 0; i <= x; i++)
    {
        int y = i ^ x;

        if (y >= i && y <= x && (y - i) < max_dif)
        {
            ans = {i, y};
            
        }
    }

    cout << ans.first << " " << ans.second << endl;
}