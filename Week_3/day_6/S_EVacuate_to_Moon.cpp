/*
    author:mdnahidahmed2002
    date: 2024-04-03 14:01:37
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
    int n, m, h;
    cin >> n >> m >> h;

    priority_queue<int> car_capacity;
    priority_queue<int> station_capacity;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        car_capacity.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        station_capacity.push(x);
    }

    long long ans = 0;

    while (!car_capacity.empty())
    {

        int cur_car = car_capacity.top();
        car_capacity.pop();

        if (!station_capacity.empty())
        {
            int cur_sta = station_capacity.top();
            station_capacity.pop();

            long long possible_capacity = 1LL * h * cur_sta;

            if (possible_capacity <= cur_car)
            {
                ans += possible_capacity;
            }
            else
            {
                ans += cur_car;
            }
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}