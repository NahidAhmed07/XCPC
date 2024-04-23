/*
    author:mdnahidahmed2002
    date: 2024-04-23 10:50:52
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    vector<long long> pref(n + 1);
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }

    while (q--)
    {
        int x;
        cin >> x;
        vector<long long>::iterator it = lower_bound(pref.begin(), pref.end(), x);
        if (it == pref.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << it - pref.begin() << endl;
        }
    }
}