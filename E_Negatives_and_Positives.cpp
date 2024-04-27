/*
    author:mdnahidahmed2002
    date: 2024-04-25 09:56:07
*/

/*
    if Ai or Ai+1 one of them negative then perform the operation

*/

#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{

    int n;
    cin >> n;
    vector<long long> v(n);
    long long init_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        init_sum += v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < 0 || v[i + 1] < 0)
        {
            int diff = (-1 * v[i]) + (-1 * v[i + 1]);
            if (diff > 0)
            {

                v[i] = (-1 * v[i]);
                v[i + 1] = (-1 * v[i + 1]);
                init_sum += (diff * 2);
            }
        }
    }

    cout << init_sum << endl;
}