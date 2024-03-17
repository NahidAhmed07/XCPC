/*
 * File Created: Sunday, 17th March 2024 1:29:37 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Sunday, 17th March 2024 1:29:52 pm
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
    int a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);
    long long ans = 0;

    if (sum % 2 == 0)
        ans = sum;
    else
        for (int i = 0; i < n; i++)
        {
            if ((sum - a[i]) % 2 == 0)
            {
                ans = sum - a[i];
                break;
            }
        }

    cout << ans << endl;

    return 0;
}