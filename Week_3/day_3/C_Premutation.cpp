/*
    author:mdnahidahmed2002
    date: 2024-03-31 16:28:54
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
    vector<vector<int>> arr(n);
    map<int, int> mp;
    pair<int, int> mx_ocur = {0, 0};
    vector<int> sum_arr;
    int totalSum = (n * (n + 1)) / 2;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < (n - 1); j++)
        {
            int x;
            cin >> x;
            sum += x;
            arr[i].push_back(x);

            if (j == n - 2)
            {
                mp[x]++;
                if (mp[x] > mx_ocur.second)
                {
                    mx_ocur = {x, mp[x]};
                }
            }
        }

        sum_arr.push_back(sum);
    }

    int need = totalSum - mx_ocur.first;
    int index;
    for (int i = 0; i < sum_arr.size(); i++)
    {
        if (sum_arr[i] == need)
        {
            index = i;
            break;
        };
    }

    for (int x : arr[index])
        cout << x << " ";

    cout << mx_ocur.first << endl;
}