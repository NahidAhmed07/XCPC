/*
 * File Created: Friday, 15th March 2024 8:02:57 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Friday, 15th March 2024 8:03:01 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = -1;

    if (c < b)

        for (int i = a; i <= b; i++)
        {
            if (i % c == 0)
            {
                ans = c;
                break;
            }
        }

    cout << ans;

    return 0;
}