#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    set<int> divisors;

    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            divisors.insert(i);
            divisors.insert(n / i);
        }
    }

    for (int x : divisors)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}