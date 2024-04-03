#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    stack<string> st;
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    while (!st.empty())
    {
        string x = st.top();
        st.pop();

        if (mp.find(x) == mp.end())
        {
            cout << x.substr(x.size() - 2, 2);
            mp[x] = 1;
        }
    }

    return 0;
}