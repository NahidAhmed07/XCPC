/*
    author:mdnahidahmed2002
    date: 2024-03-30 19:29:12
*/

#include <bits/stdc++.h>

using namespace std;

int grid[205][205];

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

long long getDiagonalSum(pair<int, int> dir, int x, int y, int n, int m)
{

    int i = x + dir.first;
    int j = y + dir.second;

    if (i < 0 || i >= n || j < 0 || j >= m)
        return 0;

    return grid[i][j] + getDiagonalSum(dir, i, j, n, m);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    long long mx = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long long left_top = getDiagonalSum({-1, -1}, i, j, n, m);
            long long right_top = getDiagonalSum({-1, 1}, i, j, n, m);
            long long left_bottom = getDiagonalSum({1, -1}, i, j, n, m);
            long long right_bottom = getDiagonalSum({1, 1}, i, j, n, m);

            long long total = grid[i][j] + left_top + left_bottom + right_top + right_bottom;

            mx = max(mx, total);
        }
    }

    cout << mx << '\n';
}