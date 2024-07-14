#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> pf;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            while (n % i == 0)
            {
                pf[i]++;
                n = n / i;
            }
        }
    }

    if (n > 1)
        pf[n]++;

    for (auto pr : pf)
    {
        cout << pr.first << " => " << pr.second << "\n";
    }

    return 0;
}