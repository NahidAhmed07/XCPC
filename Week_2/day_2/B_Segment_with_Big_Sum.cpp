/*
    author:mdnahidahmed2002
    date: 2024-03-23 10:54:26
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long sum = 0;
    int mn_seg = INT_MAX;

    while (r < n)
    {
        sum += a[r];

        if (sum >= s)
        {
            mn_seg = min(mn_seg, r - l + 1);
            while (sum >= s)
            {
                sum -= a[l];
                l++;
                if (sum >= s)
                {
                    mn_seg = min(mn_seg, r - l + 1);
                }
            }
        }

        r++;
    }

    cout << (mn_seg == INT_MAX ? -1 : mn_seg) << endl;

    return 0;
}