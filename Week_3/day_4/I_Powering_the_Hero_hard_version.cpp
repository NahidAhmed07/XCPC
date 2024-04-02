/*
    author:mdnahidahmed2002
    date: 2024-04-01 15:10:51
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

    long long ans = 0;

    priority_queue<long long> pq;
    long long x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
    }

    cout << ans << endl;
}