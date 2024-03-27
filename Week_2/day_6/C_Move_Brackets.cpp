/*
    author:mdnahidahmed2002
    date: 2024-03-27 09:35:00
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
    queue<char> a;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        a.push(x);
    }

    stack<char> st;
    int cnt = 0;

    while (!a.empty())
    {
        char ch = a.front();
        a.pop();

        if (ch == ')')
        {
            if (st.empty())
            {

                a.push(ch);
                cnt++;
            }
            else
            {
                st.pop();
            }
        }
        else
        {
            st.push(ch);
        }
    }

    cout << cnt << endl;
}