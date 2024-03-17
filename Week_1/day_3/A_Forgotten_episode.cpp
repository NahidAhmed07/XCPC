/*
 * File Created: Sunday, 17th March 2024 1:08:17 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Sunday, 17th March 2024 1:08:24 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n - 1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = n + 1;
    if (a[0] != 1)
        ans = 1;
    else
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] == 2)
            {
                ans = a[i] + 1;
                break;
            }
        }
    cout << ans << endl;
    return 0;
}