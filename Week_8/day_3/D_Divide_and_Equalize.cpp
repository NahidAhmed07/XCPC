/*
    author:mdnahidahmed2002
    date: 2024-07-13 16:35:23
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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> pf;

    for (int x = 0; x < n; x++)
    {

        for (int i = 2; i * i <= v[x]; i++)
        {
            if (v[x] % i == 0)
            {
                while (v[x] % i == 0)
                {
                    pf[i]++;
                    v[x] = v[x] / i;
                }
            }
        }

        if (v[x] > 1)
            pf[v[x]]++;
    }

    bool flag = true;

    for (auto pr : pf)
    {
        if (pr.second % n != 0)
            flag = false;
    }

    cout << (flag ? "YES" : "NO") << "\n";
}