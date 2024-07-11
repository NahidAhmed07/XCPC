/*
    author:mdnahidahmed2002
    date: 2024-07-03 21:07:32
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
    int n, m;
    cin >> n >> m;
    string A, B;
    cin >> A >> B;

    string subStr = "";

    int l = 0, r = 0;
    int ans = INT_MAX;

    while (r < n)
    {

        subStr += A[r];

        if ((r - l + 1) == m)
        {
            // check
            int cnt = 0;
            for (int i = 0; i < m; i++)
            {
                if (subStr[i] != B[i])
                    cnt++;
            }
            ans = min(ans, cnt);

            subStr.erase(0, 1);
            l++;
        }

        r++;
    }

    cout << ans << endl;
}