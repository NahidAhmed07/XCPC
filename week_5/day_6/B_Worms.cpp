#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        cout << lower_bound(v.begin(), v.end(), k) - v.begin() << endl;
    }

    return 0;
}