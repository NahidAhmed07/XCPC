/*
    author:mdnahidahmed2002
    date: 2024-03-30 20:24:54
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
    string a[n];
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    string ans;

    for (int u = 0; u < n; u++)
    {
        bool flag = false;
        string i = a[u];

        for (int x = 1; x < i.size(); x++)
        {
            string j = i.substr(0, x);
            string k = i.substr(x, i.size() - x);
            if (mp.find(j) != mp.end() && mp.find(k) != mp.end())
            {
                flag = true;
                break;
            }
        }

        if (flag)
            ans += '1';
        else
            ans += '0';
    }

    cout << ans << '\n';
}