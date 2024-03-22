#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int needed = s - (i + j);
            if (needed >= 0 && needed <= k)
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}