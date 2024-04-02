/*
    author:mdnahidahmed2002
    date: 2024-04-01 16:35:58
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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
};

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    vector<pair<int, int>> c;

    int x;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a.push_back({x, i});
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        b.push_back({x, i});
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        c.push_back({x, i});
    }

    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    sort(c.begin(), c.end(), cmp);

    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a[i].second != b[j].second && c[k].second != b[j].second && c[k].second != a[i].second)
                {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }

    cout << ans << endl;
}