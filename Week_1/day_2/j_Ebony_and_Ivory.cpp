/*
 * File Created: Saturday, 16th March 2024 9:19:55 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Saturday, 16th March 2024 9:20:04 pm
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

    int w[] = {a, b};

    bool dp[2 + 1][c + 1];
    dp[0][0] = true;
    for (int i = 1; i <= c; i++)
        dp[0][i] = false;

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (w[i - 1] <= j)
            {

                dp[i][j] = dp[i][j - w[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << (dp[2][c] ? "Yes" : "No") << endl;

    return 0;
}