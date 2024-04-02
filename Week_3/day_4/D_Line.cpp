/*
    author:mdnahidahmed2002
    date: 2024-03-31 19:54:36
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
    long long n;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> ans;

    long long initial_sum = 0;
    long long k = 0;
    for (char ch : s)
    {
        if (ch == 'L')
            initial_sum += k;
        else
            initial_sum += (n - (k + 1));
        k++;
    }

    long long l = 0, r = n - 1;
    long long mx_val = initial_sum;

    for (int v = 1; v <= n; v++)
    {
        long long L_cur_sum = mx_val;
        long long R_cur_sum = mx_val;

        bool take = false;

        while (l <= r)
        {
            if (s[l] == 'L')
            {
                L_cur_sum += ((n - l - 1) - l);
                take = true;
            }
            else
            {
                l++;
            }

            if (s[r] == 'R')
            {
                R_cur_sum += (r - (n - (r + 1)));
                take = true;
            }
            else
            {
                r--;
            }

            if (take)
            {
                break;
            }
        }

        if (L_cur_sum >= R_cur_sum)
        {
            mx_val = max(L_cur_sum, mx_val);
            l++;
        }
        else
        {
            mx_val = max(R_cur_sum, mx_val);
            r--;
        }

        ans.push_back(mx_val);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}