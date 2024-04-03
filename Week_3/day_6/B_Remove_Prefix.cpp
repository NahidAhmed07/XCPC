/*
    author:mdnahidahmed2002
    date: 2024-04-03 14:18:03
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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // mp[v[i]]++;
    }

    int l = 0, r = 0;

    while (r < n)
    {
        mp[v[r]]++;

        if (r - l + 1 > mp.size())
        {

            while (r - l + 1 != mp.size())
            {

                int x = v[l];
                if (mp[x] == 1)
                {
                    mp.erase(x);
                }
                else
                {
                    mp[x]--;
                }

                l++;
            }
        }

        r++;
    }

    cout << n - mp.size() << endl;
}