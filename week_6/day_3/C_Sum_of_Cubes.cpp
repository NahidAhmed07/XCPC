/*
    author:mdnahidahmed2002
    date: 2024-05-06 07:57:10
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 1e4;
vector<long long> pw_list;

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int i = 1; i <= N; i++)
    {
        pw_list.push_back(pow(i, 3));
    }

    while (t--)
        solve();
    return 0;
}
void solve()
{
    long long x;
    cin >> x;

    string ans = "NO";

    for (int j = 0; j < pw_list.size(); j++)
    {
        if (pw_list[j] >= x)
            break;
        long long y = pw_list[j];
        long long need = x - y;
        bool found = false;
        int l = 0, r = pw_list.size() - 1, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (pw_list[mid] == need)
            {
                found = true;
                break;
            }
            else if (need < pw_list[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (found)
        {
            ans = "YES";
            break;
        }
    }

    cout << ans << endl;
}