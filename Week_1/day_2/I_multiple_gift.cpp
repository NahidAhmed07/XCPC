/*
 * File Created: Saturday, 16th March 2024 12:31:20 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Saturday, 16th March 2024 12:31:25 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long count = 1;

    long long m = x;

    while (m < y)
    {
        long long mul = m * 2;
        if (mul <= y)
        {
            count++;
        }

        m = mul;
    }

    cout << count << endl;

    return 0;
}