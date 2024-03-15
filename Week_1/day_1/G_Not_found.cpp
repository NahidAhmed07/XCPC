/*
 * File Created: Friday, 15th March 2024 8:39:22 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Friday, 15th March 2024 8:39:25 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool feq[26];
    memset(feq, false, sizeof(feq));

    string s;
    cin >> s;

    for (char ch : s)
    {
        feq[int(ch) - 97] = true;
    }

    bool not_found = true;

    for (int i = 0; i < 26; i++)
    {
        if (feq[i] == false)
        {
            not_found = false;
            cout << char(i + 97);
            break;
        }
    }

    if (not_found)
    {
        cout << "None";
    }

    return 0;
}