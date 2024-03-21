#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    char ch;
    cin >> n >> ch;
    string str;
    cin >> str;
    str += str;

    int mx = 0;

    int i = 0;

    while (i < str.size())
    {

        if (str[i] == ch)
        {
            int step = 0;
            while (str[i] != 'g' && i < str.size())
            {
                i++;
                step++;
            }
            mx = max(mx, step);
        }

        i++;
    }

    cout << mx << endl;
}

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