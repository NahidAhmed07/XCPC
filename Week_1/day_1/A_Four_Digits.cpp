/*
 * File Created: Friday, 15th March 2024 7:51:58 pm
 * Author: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Last Modified: Friday, 15th March 2024 7:52:03 pm
 * Modified By: NahidAhmed07 (mdnahidahmed2002@gmail.com)
 * -----
 * Copyright  - 2024 By https://nahidahmed.netlify.app
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int str_length = str.length();
    if (str_length < 4)
    {

        for (int i = 1; i <= (4 - str_length); i++)
        {
            str = '0' + str;
        }
    }

    cout << str << endl;
    return 0;
}