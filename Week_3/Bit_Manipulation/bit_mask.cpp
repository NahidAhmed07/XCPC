#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}