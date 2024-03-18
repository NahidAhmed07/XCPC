

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long cnt = 0;

    while (l < n && r < m)
    {
        long long cnt_l = 0, cnt_r = 0;
        int cur = a[l];

        while (a[l] == cur && l < n)
        {
            l++;
            cnt_l++;
        }

        if (b[r] < cur)
        {
            while (b[r] < cur && r < m)
            {
                r++;
            }
        }

        while (b[r] == cur && r < m)
        {
            r++;
            cnt_r++;
        }

        cnt += cnt_l * cnt_r;
    }

    cout << cnt << endl;

    return 0;
}