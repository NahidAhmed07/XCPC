#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<bool> prime_numbers(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (prime_numbers[i])
        {

            for (int j = i + i; j <= n; j += i)
            {
                prime_numbers[j] = false;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (prime_numbers[i])
            cout << i << " ";
    }

    return 0;
}