#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long sum = 0;
    long long seg_cnt = 0;

    while (r < n)
    {
        sum += a[r];

        if (sum >= s)
        {
            seg_cnt += (n - r);

            while (sum >= s && l <= r)
            {
                sum -= a[l];
                l++;

                if (sum >= s)
                {
                    seg_cnt += n - r;
                }
            }
        }

        r++;
    }

    cout << seg_cnt << "\n";

    return 0;
}