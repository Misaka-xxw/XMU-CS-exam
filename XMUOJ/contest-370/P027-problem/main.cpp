#include <bits/stdc++.h>
using namespace std;
vector<string> arr;
int w, h, query;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> w >> h >> query;
    arr.assign(h, string(w, '.'));
    int x, y, x1, y1, x2, y2;
    int cmd;
    char color;
    int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
    queue<pair<int, int>> q;
    while (query--)
    {
        cin >> cmd;
        if (cmd == 0)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 == x2) //|
            {
                x = x1;
                if (y1 > y2)
                {
                    swap(y1, y2);
                }
                for (y = y1; y <= y2; ++y)
                {
                    switch (arr[y][x])
                    {
                    case '-':
                        arr[y][x] = '+';
                        break;
                    case '+':
                        break;
                    default:
                        arr[y][x] = '|';
                        break;
                    }
                }
            }
            else //-
            {
                y = y1;
                if (x1 > x2)
                {
                    swap(x1, x2);
                }
                for (x = x1; x <= x2; ++x)
                {
                    switch (arr[y][x])
                    {
                    case '|':
                        arr[y][x] = '+';
                        break;
                    case '+':
                        break;
                    default:
                        arr[y][x] = '-';
                        break;
                    }
                }
            }
        }
        else
        {
            cin >> x >> y >> color;
            if (arr[y][x] != color)
            {
                q.emplace(x, y);
                arr[y][x] = color;
            }
            while (!q.empty())
            {
                auto [cx, cy] = q.front();
                q.pop();
                for (int d = 0; d < 4; ++d)
                {
                    int nx = cx + dx[d],
                        ny = cy + dy[d];
                    if (nx >= 0 && nx < w && ny >= 0 && ny < h && arr[ny][nx] != '|' && arr[ny][nx] != '-' && arr[ny][nx] != '+' && arr[ny][nx] != color)
                    {
                        arr[ny][nx] = color;
                        q.emplace(nx, ny);
                    }
                }
            }
        }
    }
    for (int i = h - 1; i >= 0; --i)
    {
        cout << arr[i] << endl;
    }
    return 0;
}