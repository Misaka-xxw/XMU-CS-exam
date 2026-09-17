#include <bits/stdc++.h>
using namespace std;
int arr[100005], flag[100005];
int main()
{
    int n, q, a, b, c;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        cin >> a >> b >> c;
        flag[a] += c;
        flag[b + 1] -= c;
    }
    int delta = 0;
    for (int i = 1; i <= n; ++i)
    {
        delta += flag[i];
        cout << arr[i] + delta << ' ';
    }
    return 0;
}

/*
6 3
1 2 2 1 2 1
1 3 1
3 5 1
1 6 1
*/
