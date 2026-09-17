#include <bits/stdc++.h>
using namespace std;
int pre[1005][1005];
int main()
{
    int n, m, q, num;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> num;
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] + num - pre[i - 1][j - 1];
        }
    }
    while (q--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        y1--;
        cout << pre[x2][y2] - pre[x1][y2] - pre[x2][y1] + pre[x1][y1] << endl;
    }
    return 0;
}
/*
3 4 3
1 7 2 4
3 6 2 8
2 1 2 3
1 1 2 2
2 1 3 4
1 3 3 4
*/