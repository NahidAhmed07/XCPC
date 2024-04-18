/*
    author:mdnahidahmed2002
    date: 2024-04-18 10:35:35
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

    for (int i = 0; i < (1 << 8); i++)
    {
        int XOR = 0;
        for (int j = 0; j < n; j++)
        {

            XOR ^= (v[j] ^ i);
        }

        if (XOR == 0)
        {
            cout << i << endl;
            return;
        }
    }

    cout << -1 << endl;
}