/*
    author:mdnahidahmed2002
    date: 2024-03-24 16:07:41
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
    int n, l;
    cin >> n >> l;

    string str_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str_arr[i];
    }

    int mn_cost = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int cost = 0;

            for (int k = 0; k < l; k++)
            {
                cost += abs(int(str_arr[i][k]) - int(str_arr[j][k]));
            }

            mn_cost = min(cost, mn_cost);
        }
    }

    cout << mn_cost << "\n";
}