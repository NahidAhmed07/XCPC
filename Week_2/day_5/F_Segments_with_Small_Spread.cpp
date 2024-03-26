#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    multiset<long long> ms;
    long long seg_cnt = 0;

        while (r < n)
    {
        ms.insert(a[r]);

        long long mn, mx;
        mn = *ms.begin();
        mx = *ms.rbegin();

        if (mx - mn <= k)
        {
            seg_cnt += (r - l + 1);
        }
        else
        {

            while (l < r)
            {
                mx = *ms.rbegin();
                mn = *ms.begin();
                if (mx - mn <= k)
                    break;

                auto it = ms.find(a[l]);
                ms.erase(it);
                l++;
            }

            mx = *ms.rbegin();
            mn = *ms.begin();
            if (mx - mn <= k)
            {
                seg_cnt += (r - l + 1);
            }
        }

        r++;
    }

    cout << seg_cnt << endl;

    return 0;
}