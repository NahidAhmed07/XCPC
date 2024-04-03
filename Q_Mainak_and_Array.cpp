/*
    author:mdnahidahmed2002
    date: 2024-04-03 15:07:41
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
    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    if (v[0] == mn || v[n - 1] == mx)
    {
        cout << mx - mn << endl;
    }
    else
    {
        mx = INT_MIN;
        int k = n;
        while (k--)
        {
            int left = v[0];
            for (int i = 0; i < n - 1; i++)
            {

                v[i] = v[i + 1];
            }
            v[n - 1] = left;

            mx = max(v[n - 1] - v[0], mx);
        }

        cout << mx << endl;
    }
}