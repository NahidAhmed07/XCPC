/*
    author:mdnahidahmed2002
    date: 2024-05-08 20:50:44
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    long long ans = 0;

    if (n % 2 == 1)
    {
        ans += v[r];
        r--;
    }

    while (l < r)
    {
        ans += (1LL * (v[r] - v[l]));
        l++;
        r--;
    }


    cout<<ans<<endl;
}