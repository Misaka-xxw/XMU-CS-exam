#include <bits/stdc++.h>
using namespace std;
long long arr[1005][1005], flag[1005][1005];
int main()
{
    int n, m, q, x1, x2, y1, y2, c;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> arr[i][j];
            flag[i][j] += arr[i][j];
            flag[i + 1][j + 1] += arr[i][j];
            flag[i][j + 1] -= arr[i][j];
            flag[i + 1][j] -= arr[i][j];
        }
    }
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        flag[x1][y1] += c;
        flag[x2 + 1][y2 + 1] += c;
        flag[x1][y2 + 1] -= c;
        flag[x2 + 1][y1] -= c;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + flag[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i][1];
        for (int j = 2; j <= m; ++j)
        {
            cout << ' ' << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
/*
3 4 3
1 2 2 1
3 2 2 1
1 1 1 1
1 1 2 2 1
1 3 2 3 2
3 1 3 4 1
*/