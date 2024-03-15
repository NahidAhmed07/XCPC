/*
 * File Created: Friday, 15th March 2024 7:45:47 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Friday, 15th March 2024 7:46:05 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << a + b << endl;
    else
        cout << (max(a, b) * 2) - 1 << endl;

    return 0;
}