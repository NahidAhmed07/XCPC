/*
    author:mdnahidahmed2002
    date: 2024-03-23 12:16:25
*/

#include <bits/stdc++.h>

using namespace std;

void solve();
int feq_or[27];
int feq_tw[27];
string str = "Timur";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    memset(feq_or, 0, sizeof(feq_or));
    memset(feq_tw, 0, sizeof(feq_tw));
    for (char ch : str)
    {
        if (ch == 'T')
            feq_or[26] = 1;
        else
        {
            feq_or[ch - 'a']++;
        }
    }

    while (t--)
        solve();
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    bool flag = true;

    char x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 'A' && x <= 'Z')
        {
            if (x == 'T')
                feq_tw[26] = 1;
        }

        else
        {
            feq_tw[x - 'a']++;
        }
    }

    if (n != str.size())
    {
        flag = false;
    }
    else
    {
        for (int i = 0; i < 27; i++)
        {
            if (feq_or[i] != feq_tw[i])
                flag = false;
        }
    }

    cout << (flag ? "YES\n" : "NO\n");

    memset(feq_tw, 0, sizeof(feq_tw));
}