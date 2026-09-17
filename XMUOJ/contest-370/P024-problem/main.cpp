#include <bits/stdc++.h>
using namespace std;
int ans = INT_MAX;

// s侧=2*r*h
// s顶=r*r
// V=r*r*h
void dfs(int layer, int v, int s, int r0, int h0)
{
    // cout << layer << ' ' << v << ' ' << s << ' ' << r0 << ' ' << h0 << endl;
    if (s >= ans || v < 0)
    {
        return;
    }
    if (layer == 0)
    {
        if (v != 0)
        {
            return;
        }
        s += r0 * r0;
        ans = min(s, ans);
        return;
    }
    int r_max = sqrt((double)v / h0);
    for (int r = r_max; r >= r0; --r)
    {
        int h_max = v / (r * r) + 1;
        for (int h = h_max; h >= h0; --h)
        {
            dfs(layer - 1, v - r * r * h, s + 2 * r * h, r + 1, h + 1);
        }
    }
}
int main()
{
    int v, m;
    cin >> v >> m;
    dfs(m, v, 0, 1, 1);
    if (ans == INT_MAX)
    {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}