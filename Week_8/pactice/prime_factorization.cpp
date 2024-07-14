#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int N = 20;

    vector<bool> primes(N + 1, true);

    for (int i = 2; i * i <= N; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= N; j += i)
                primes[j] = false;
        }
    }

    vector<int> all_primes;
    for (int i = 2; i <= N; i++)
    {
        if (primes[i])
            all_primes.push_back(i);
    }

    for (int x : all_primes)
    {
        cout << x << " ";
    }
    cout << endl;
    int idx = 0;
    int x;
    cin >> x;

    map<int, int> pf;

    while (x > 1)
    {
        if (x % all_primes[idx] == 0)
        {
            pf[all_primes[idx]]++;
            x = x / all_primes[idx];
        }
        else
        {
            idx++;
        }
    }

    for (auto ap : pf)
    {
        cout << ap.first << " => " << ap.second << endl;
    }

    return 0;
}