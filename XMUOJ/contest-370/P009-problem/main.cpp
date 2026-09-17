#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<int, int>> pq;
    long long ans = 0;
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        pq.emplace(a, -b);
    }
    while (m--)
    {
        auto [a, b] = pq.top();
        pq.pop();
        ans += a;
        a += b;
        if (a <= 0)
        {
            continue;
        }
        pq.emplace(a, b);
    }
    cout << ans << endl;
    return 0;
}