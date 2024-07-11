#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll x : arr)
    {
        int divisor_cnt = 0;

                for (ll i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                divisor_cnt++;
                if (i != x / i)
                    divisor_cnt++;
            }

            if (divisor_cnt > 3)
                break;
        }

        if (divisor_cnt == 3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}