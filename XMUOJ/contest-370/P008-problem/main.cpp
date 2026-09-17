#include <bits/stdc++.h>
using namespace std;
int fish[105], die_fish[105], dist[105];
int dp[2][1005];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> fish[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> die_fish[i];
    }
    for (int i = 1; i < n; i++)
    {
        cin >> dist[i];
        dist[i] += dist[i - 1];
    }
    return 0;
}