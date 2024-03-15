/*
 * File Created: Friday, 15th March 2024 8:27:22 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Friday, 15th March 2024 8:27:26 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int ans = 0;

    if (t >= a)
    {
        int x = a;
        while (x <= t)
        {
            ans += b;
            x += a;
        }
    }

    cout << ans << endl;
    return 0;
}