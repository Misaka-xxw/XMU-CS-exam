#include <bits/stdc++.h>
using namespace std;
int pre[100005]; // 区间和模k的数量
int main()
{
    int n, k, a, ans = 0, sum = 0;
    cin >> n >> k;
    pre[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum = (sum + a) % k;
        ans += pre[sum];
        pre[sum]++;
    }
    cout << ans << endl;
    return 0;
}
/*
5 2
1
2
3
4
5
*/