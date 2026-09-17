#include <bits/stdc++.h>
using namespace std;
vector<long long> minu_arr[3];
long long nums[100005][3], sums[3], diff;
int cnts[3];
int orders[3][3] = {{0, 1, 2}, {1, 2, 0}, {2, 0, 1}};
int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < 3; ++j)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            diff = nums[i][j] - nums[i][orders[j][1]] - nums[i][orders[j][2]];
            if (diff >= 0)
            {
                cnts[j]++;
                sums[j] += diff;
            }
            else
            {
                minu_arr[j].push_back(diff);
            }
        }
    }
    int ans = -1;
    for (int j = 0; j < 3; ++j)
    {
        if (sums[j] == 0)
        {
            continue;
        }
        sort(minu_arr[j].begin(), minu_arr[j].end(), greater<long long>());
        for (auto &m : minu_arr[j])
        {
            sums[j] += m;
            if (sums[j] <= 0)
            {
                sums[j] -= m;
                break;
            }
            cnts[j]++;
        }
        ans = max(ans, cnts[j]);
    }
    cout << ans << endl;
    return 0;
}