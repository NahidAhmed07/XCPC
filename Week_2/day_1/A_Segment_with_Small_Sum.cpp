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
    int seg = 0;

    while (r < n)
    {
        sum += a[r];

        if (sum <= s)
        {
            seg = max(seg, r - l + 1);
        }
        else
        {
            sum -= a[l];
            l++;
        }

        r++;
    }

    cout << seg << endl;

    return 0;
}