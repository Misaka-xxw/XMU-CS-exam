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
    int n, m;
    cin>>n>>m;
    Dsu dsu(n);
    char op;
    int a, b;
    while (m--)
    {
        cin >> op >> a >> b;
        if (op == 'Q')
        {
            if (dsu.query(a, b))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            dsu.merge(a, b);
        }
    }
    return 0;
}