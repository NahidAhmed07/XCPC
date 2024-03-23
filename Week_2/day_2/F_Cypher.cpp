/*
    author:mdnahidahmed2002
    date: 2024-03-23 11:53:14
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
    vector<int> a;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int l;
        char ch;
        cin >> l;
        while (l--)
        {
            cin >> ch;
            if (ch == 'D')
            {
                if (a[i] == 9)
                {
                    a[i] = 0;
                }
                else
                {
                    a[i]++;
                }
            }
            else if (ch == 'U')
            {
                if (a[i] == 0)
                {
                    a[i] = 9;
                }
                else
                {
                    a[i]--;
                }
            }
        }
    }

    for (int y : a)
    {
        cout << y << " ";
    }
    cout << "\n";
}