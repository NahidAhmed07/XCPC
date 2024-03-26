#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int r = 0, l = 0;
    map<int, int> mp;

    long long seg_cnt = 0;

    while (r < n)
    {
        mp[a[r]]++;

        if (mp.size() <= k)
        {
            seg_cnt += (r - l + 1);
        }
        else
        {
            while (mp.size() > k)
            {
                if (mp[a[l]] == 1)
                {
                    mp.erase(a[l]);
                }
                else
                {
                    mp[a[l]]--;
                }
                l++;
            }

            if (mp.size() <= k)
            {
                seg_cnt += (r - l + 1);
            }
        }

        r++;
    }

    cout << seg_cnt << endl;

    return 0;
}