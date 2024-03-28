/*
    author:mdnahidahmed2002
    date: 2024-03-28 11:24:56
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
    int a[n];
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool ans = true;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            st.insert(a[l]);
            st.insert(a[r]);
            ans = false;
            break;
        }

        l++;
        r--;
    }

    if (ans)
    {
        cout << "YES\n";
        return;
    }

    for (int val : st)
    {
        l = 0, r = n - 1;
        bool flag = true;

        while (l < r)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else if (a[l] == val)
            {
                l++;
            }
            else if (a[r] == val)
            {
                r--;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES\n" : "NO\n");
}