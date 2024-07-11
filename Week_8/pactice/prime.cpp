#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            return 0;
        }
    }

    cout << "prime" << endl;

    return 0;
}