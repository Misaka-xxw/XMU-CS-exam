#include <bits/stdc++.h>
using namespace std;
const int N = (5e5) + 5;
int n;
string cows;
int cnt[N], headcow[N]; // 连续相同牛数量，相同牛的头牛对应
int main()
{
    cin >> n >> cows;
    cows.insert(cows.begin(), cows[0]);
    cows.insert(cows.end(), cows[n]);
    int curhead = 1; // 当前头牛
    for (int i = 1; i <= n; ++i)
    {
        if (cows[i] == cows[curhead])
        {
            cnt[curhead]++;
            headcow[i] = curhead;
        }
        else
        {
            curhead = i;
            headcow[i] = i;
            cnt[i] = 1;
        }
    }
    int l, r; // 独牛左右的异牛数量
    long long ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (cows[i] == cows[i - 1])
        {
            l = 0;
        }
        else
        {
            l = i - headcow[i - 1];
        }
        if (cows[i] == cows[i + 1])
        {
            r = 0;
        }
        else
        {
            r = cnt[i + 1];
        }
        if (l + r < 2)
        {
            continue;
        }
        ans += ((l + 1) * (r + 1) - 1);
        if (l != 0)
        {
            ans--;
        }
        if (r != 0)
        {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}