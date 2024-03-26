#include <bits/stdc++.h>

using namespace std;

int ld(string s, int k)
{
    int l = 0, r = 0;
    vector<char> sum;
    long long ans = -1;
    map<char, int> mp;

    while (r < s.size())
    {
        mp[s[r]]++;
        sum.push_back(s[r]);

        if (mp.size() == k)
        {

            if (sum.size() > ans)
            {
                ans = sum.size();
            }
        }
        else if (mp.size() > k)
        {

            while (mp.size() > k && l < r)
            {
                if (mp[s[l]] == 1)
                {
                    mp.erase(s[l]);
                }
                else
                {
                    mp[s[l]] -= 1;
                }
                sum.erase(sum.begin());
                l++;
            }

            if (mp.size() == k)
            {
                if (sum.size() > ans)
                {
                    ans = sum.size();
                }
            }
        }

        r++;
    }

    return ans;
}

int main()
{

    string s;
    int k;
    cin >> s >> k;

    cout << ld(s, k);

    return 0;
}