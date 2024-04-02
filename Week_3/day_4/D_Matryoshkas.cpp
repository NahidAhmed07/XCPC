/*
    author:mdnahidahmed2002
    date: 2024-04-01 12:15:33
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
    int ans = 0;

    map<int, int> mp;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    while (!mp.empty())
    {

        ans++;
        int p = (*mp.begin()).first;
        if (mp[p] == 1)
        {
            mp.erase(mp.begin());
        }
        else
        {
            mp[p]--;
        }

        if (mp.empty())
            break;

        int com = p;

        for (auto it = mp.cbegin(); it != mp.cend();)
        {
            int cur = (*it).first;

            if (cur == com)
            {
                it++;
                continue;
            }

            if (cur - com == 1)
            {
                com = cur;
                if (mp[cur] == 1)
                {
                    mp.erase(it++);
                }
                else
                {

                    mp[cur]--;
                    it++;
                }
            }
            else
            {
                break;
            }
        }
    }

    cout << ans << endl;
}