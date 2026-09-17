#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int pos[4] = {0, 2, 3, 1};
void dfs(int layer, LL idx, LL &x, LL &y, LL len) // 层数从1推到n
{
    if (layer == 0) // 顶层
    {
        x = y = 0;
        pos[0] = 0;
        pos[1] = 2;
        pos[2] = 3;
        pos[3] = 1;
        return;
    }
    int block = idx & 3; // idx%4
    dfs(layer - 1, idx >> 2ll, x, y, len << 1ll);
    if (pos[block] & 2) // 二进制1x
    {
        x += len;
    }
    if (pos[block] & 1) // 二进制x1
    {
        y += len;
    }
    if (block == 0) // 以“\”为坐标轴对称
    {
        swap(pos[1], pos[3]);
    }
    else if (block == 3) // 以“/”为坐标轴对称
    {
        swap(pos[0], pos[2]);
    }
}
int main()
{
    int n, layer;
    LL aa, bb;
    cin >> n;
    LL x0, y0, x1, y1;
    long double dist;//精度！
    for (int i = 0; i < n; ++i)
    {
        cin >> layer >> aa >> bb;
        dfs(layer, aa - 1, x0, y0, 1);
        dfs(layer, bb - 1, x1, y1, 1);
        __int128 dx = x1 - x0, dy = y1 - y0;
        dist = sqrtl(dx * dx + dy * dy);
        cout << llround(dist * 10.0L) << endl;
    }
    return 0;
}