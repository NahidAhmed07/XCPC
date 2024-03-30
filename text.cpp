#include <bits/stdc++.h>

using namespace std;

int main()
{
    string i = "abab";
    string j = "ab";
    string ft = i.substr(0, j.size());
    string k = i.substr(j.size(), i.size() - j.size());

    cout << k << endl;

    return 0;
}