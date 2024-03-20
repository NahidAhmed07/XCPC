#include <bits/stdc++.h>

using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{

    int l = 0, r = 0;
    vector<long long> ans;
    int cur = A[l];

    queue<int> q;

    while (r < N)
    {

        if (A[r] < 0)
            q.push(A[r]);

        if ((r - l + 1) == K)
        {

            if (q.empty())
            {
                ans.push_back(0);
            }
            else
            {

                ans.push_back(q.front());
            }

            int x = A[l];

            l++;
            r++;
            if (x == q.front())
                q.pop();
        }
        else
        {
            r++;
        }
    }

    return ans;
}

int main()
{
    long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long k;
    cin >> k;

    vector<long long> re = printFirstNegativeInteger(a, n, k);

    for (long long x : re)
    {
        cout << x << " ";
    }

    return 0;
}