#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        auto it_l = lower_bound(v.begin(), v.end(), l);

        // auto it_r = up
        }

    return 0;
}