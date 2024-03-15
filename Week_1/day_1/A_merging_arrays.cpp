/*
 * File Created: Friday, 15th March 2024 3:15:43 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Friday, 15th March 2024 3:16:45 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;

    while (l < n && r < m)
    {

        if (r < m && a[l] <= b[r])
        {
            while (l < n && a[l] <= b[r])
            {
                cout << a[l] << " ";
                l++;
            }
        }
        else
        {
            while (r < m && b[r] <= a[l])
            {
                cout << b[r] << " ";
                r++;
            }
        }
    }

    while (l < n)
        cout << a[l++] << " ";
    while (r < m)
        cout << b[r++] << " ";

    return 0;
}