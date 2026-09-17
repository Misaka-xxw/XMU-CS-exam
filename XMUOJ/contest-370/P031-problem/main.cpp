#include <bits/stdc++.h>
using namespace std;
struct Dsu
{
    vector<int> root;
    Dsu(int n) : root(n + 1)
    {
        iota(root.begin(), root.end(), 0);
    }
    int find(int a)
    {
        if (a == root[a])
        {
            return a;
        }
        return root[a] = find(root[a]);
    }
    bool query(int a, int b)
    {
        return find(a) == find(b);
    }
    void merge(int a, int b)
    {
        root[find(b)] = find(a);
    }
};
int main()
{
    int n, m, y, x, a, b;
    char c;
    cin >> n >> m;
    Dsu dsu(n * n);
    for (int i = 1; i <= m; ++i)
    {
        cin >> y >> x >> c;
        a = (y - 1) * n + x;
        if (c == 'D')
        {
            b = a + n;
        }
        else // R
        {
            b = a + 1;
        }
        if (dsu.query(a, b))
        {
            cout << i << endl;
            break;
        }
        else
        {
            dsu.merge(a, b);
        }
    }
    return 0;
}