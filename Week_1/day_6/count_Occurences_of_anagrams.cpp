#include <bits/stdc++.h>

using namespace std;

int search(string pat, string txt)
{
    int l = 0, r = 0;
    int k = pat.length();
    int n = txt.length();
    vector<int> feq(26, 0);
    vector<int> feq2(26, 0);
    for (char ch : pat)
    {
        feq[int(ch) - 'a']++;
    }

    int count = 0;

    while (r < n)
    {
        feq2[int(txt[r] - 'a')]++;
        if ((r - l + 1) == k)
        {
            if (feq == feq2)
                count++;

            feq2[int(txt[l]) - 'a']--;
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }

    return count;
}

int main()
{
    string pat, txt;
    cin >> pat >> txt;

    cout << search(pat, txt);

    return 0;
}