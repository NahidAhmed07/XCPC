/*
    author:mdnahidahmed2002
    date: 2024-07-04 10:58:23
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 21, M = 21;
bool isValidCell(int i, int j)
{
    return (i < N && i >= 0 && j < M && j >= 0);
}

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
    string bi_dir;
    cin >> bi_dir;

    vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

    stack<pair<int, int>> adj_list;
    bool visited[N][M];
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            visited[i][j] = false;
        }
    }

    int ans_count = 0;

    adj_list.push({10, 10});
    visited[10][10] = true;
    ans_count++;

    while (!adj_list.empty())
    {

        pair<int, int> cur_pr = adj_list.top();
        int a = cur_pr.first, b = cur_pr.second;
        adj_list.pop();
        for (int i = 0; i < 4; i++)
        {
            if (bi_dir[i] == '1')
            {
                //
                int child_a = a + dir[i].first;
                int child_b = b + dir[i].second;

                if (!visited[child_a][child_b] && isValidCell(child_a, child_b))
                {
                    adj_list.push({child_a, child_b});
                    visited[child_a][child_b] = true;
                    ans_count++;
                }
            }
        }
    }

    cout << ans_count << endl;
}