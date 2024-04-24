/*
    author:mdnahidahmed2002
    date: 2024-04-24 13:20:26
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
    int n, cost;
    cin >> n >> cost;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x + i);
    }

    sort(v.begin(), v.end());
    long long sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (1LL * v[i]);
        if (sum <= cost)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}