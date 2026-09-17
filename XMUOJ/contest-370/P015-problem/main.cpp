#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    int rr = INT_MIN, ans = 0;
    for (auto &[l, r] : arr)
    {
        if (l > rr)
        {
            rr = r;
            ans++;
        }
        else
        {
            rr = max(rr, r);
        }
    }
    cout << ans << endl;
    return 0;
}