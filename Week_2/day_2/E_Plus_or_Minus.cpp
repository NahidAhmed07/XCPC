/*
    author:mdnahidahmed2002
    date: 2024-03-23 11:42:21
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << "+\n";
        else
            cout << "-\n";
    }
    return 0;
}