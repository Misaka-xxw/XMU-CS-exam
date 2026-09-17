#include <bits/stdc++.h>
using namespace std;
int cnt[4];
const long long p = (1e9l) + 7;
long long quick_pow(long long a, long long b)
{
    if (a == 1)
    {
        return 1;
    }
    long long ret = 1;
    while (b)
    {
        if (b & 1)
        {
            ret = ret * a % p;
        }
        a = a * a % p;
        b >>= 1;
    }
    return ret;
}
int main()
{
    int n;
    string s;
    cin >> n >> s;
    for (auto &c : s)
    {
        switch (c)
        {
        case 'A':
            cnt[0]++;
            break;
        case 'C':
            cnt[1]++;
            break;
        case 'G':
            cnt[2]++;
            break;
        case 'T':
            cnt[3]++;
            break;
        default:
            break;
        }
    }
    sort(cnt, cnt + 4, greater<int>());
    int maxlen = 1;
    for (int i = 1; i < 4; ++i)
    {
        if (cnt[i] == cnt[0])
        {
            maxlen++;
        }
        else
        {
            break;
        }
    }
    cout << quick_pow(maxlen, n) << endl;
    return 0;
}