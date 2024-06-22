#include <bits/stdc++.h>

using namespace std;

int countFunc(int ti, int zi, int yi, int mid)
{
    int cnt = 0;
    int seg = (ti * zi) + yi;
    cnt = (mid / seg) * zi;
    int rem = mid % seg;

    cnt += (rem / ti);
    return cnt;
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> asstList(n);
    for (int i = 0; i < n; i++)
    {
        int ti, zi, yi;
        cin >> ti >> zi >> yi;

        asstList[i].push_back(ti);
        asstList[i].push_back(zi);
        asstList[i].push_back(yi);
    }

    int ansTime;
    vector<int> ansArray(n);
    vector<int> tempCountArray(n);
    int tempAns;
    int mx_time = (200 * 150000) + 10;

    auto isOk = [&](int mid)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int ti = asstList[i][0];
            int zi = asstList[i][1];
            int yi = asstList[i][2];

            int curCount = countFunc(ti, zi, yi, mid);
            count += curCount;
            tempCountArray[i] = curCount;
        }
        tempAns = count;

        return count >= m;
    };

    int l = 0;
    int r = mx_time;
    int mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (isOk(mid))
        {
            ansTime = tempAns;
            ansArray = tempCountArray;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ansTime << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ansArray[i] << " ";
    }

    return 0;
}