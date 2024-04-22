/*
    author:mdnahidahmed2002
    date: 2024-04-22 22:50:30
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
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        st.push(x);
    }
    string ans;

    while (!st.empty())
    {

        int cur = st.top() - '0';
        st.pop();

        if (cur == 0)
        {
            int p = st.top() - '0';
            st.pop();
            int r = (st.top() - '0') * 10;
            st.pop();
            cur = r + p;
        }

        char y = (cur + 'a') - 1;
        ans = y + ans;
    }

    cout << ans << endl;
}