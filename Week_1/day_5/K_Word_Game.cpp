#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string, bool> pl1, pl2, pl3;
    set<string> un_str;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        un_str.insert(a);
        pl1[a] = true;
    }
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        un_str.insert(a);
        pl2[a] = true;
    }
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        un_str.insert(a);
        pl3[a] = true;
    }

    int pl1_scr = 0, pl2_scr = 0, pl3_scr = 0;

    for (string cur : un_str)
    {

        int pl1_st = pl1.count(cur);
        int pl2_st = pl2.count(cur);
        int pl3_st = pl3.count(cur);

        if (pl1_st == 1 && pl2_st == 1 && pl3_st == 1)
        {
            // nothing to do
        }
        else if (pl1_st == 1 && pl2_st == 1)
        {
            pl1_scr++;
            pl2_scr++;
        }
        else if (pl1_st == 1 && pl3_st == 1)
        {
            pl1_scr++;
            pl3_scr++;
        }
        else if (pl2_st == 1 && pl3_st == 1)
        {
            pl2_scr++;
            pl3_scr++;
        }
        else
        {
            if (pl1_st == 1)
                pl1_scr += 3;
            if (pl2_st == 1)
                pl2_scr += 3;
            if (pl3_st == 1)
                pl3_scr += 3;
        }
    }

    cout << pl1_scr << " " << pl2_scr << " " << pl3_scr << endl;
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}