/*
    author:mdnahidahmed2002
    date: 2024-03-23 11:36:11
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int op = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            op++;
    }

    cout << op << endl;

    return 0;
}