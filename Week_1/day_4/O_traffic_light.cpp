

// ########### Not Accepted ###################

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char cur;
        cin >> n >> cur;
        char a[n];
        int cur_index = -2;
        int g_index = -2;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == cur && i > cur_index + 1)
            {
                cur_index = i;
            }
            if (a[i] == 'g')
            {
                if (g_index == -2 || i == n - 1)
                {
                    g_index = i;
                }
            }
        }
        int ans;

        if (n == 1)
            ans = 0;
        else
        {
            if (cur_index < g_index)
            {
                ans = g_index - cur_index;
            }
            else
            {
                ans = (n - cur_index) + g_index;
            }
        }

        cout << ans << endl;
    }
    return 0;
}