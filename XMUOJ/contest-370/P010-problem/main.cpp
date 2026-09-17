#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, far = INT_MIN, ans = 0;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> l >> r;
        arr[i] = make_pair(l, r);
    }
    sort(arr.begin(), arr.end(), [&](pair<int, int> &a, pair<int, int> &b)
         { return a.second < b.second; });
    for (auto &p : arr)
    {
        if (p.first <= far)
        {
            continue;
        }
        ++ans;
        far = p.second;
    }
    cout << ans << endl;
    return 0;
}