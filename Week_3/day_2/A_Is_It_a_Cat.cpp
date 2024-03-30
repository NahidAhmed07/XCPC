/*
    author:mdnahidahmed2002
    date: 2024-03-29 22:48:45
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
    string s;
    cin >> n >> s;
    bool flag = true;
    if (n < 4)
    {
        flag = false;
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    if (s[0] != 'm')
    {
        flag = false;
    }
    if (s[n - 1] != 'w')
        flag = false;

    if (flag == false)
    {
        cout << "NO\n";
        return;
    }

    char tar[5] = {'m', 'e', 'o', 'w', '0'};
    int tar_index = 1;

    int i = 1;

    while (i < n)
    {
        if (s[i] == s[i - 1])
        {
            i++;
            continue;
        }
        if (s[i] == tar[tar_index])
        {
            tar_index++;
        }
        else
        {
            flag = false;
            break;
        }
        i++;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}