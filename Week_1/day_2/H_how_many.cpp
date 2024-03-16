/*
 * File Created: Saturday, 16th March 2024 12:07:31 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Saturday, 16th March 2024 12:07:35 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;

    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                if ((i + j + k) <= s && (i * j * k) <= t)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}