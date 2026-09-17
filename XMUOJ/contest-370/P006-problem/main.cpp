#include <bits/stdc++.h>
using namespace std;
int arr[100005], tmp[100005];
void mergesort(int l, int r)
{
    
    
    if (l == r)
    {
        return;
    }
    int mid = l + ((r - l) >> 1);
    int lp = l, rp = mid + 1;
    mergesort(l, mid);
    mergesort(rp, r);
    for (int p = l; p <= r; ++p)
    {
        if (arr[lp] < arr[rp])
        {
            tmp[p] = arr[lp];
            ++lp;
            if (lp > mid)
            {
                while (rp <= r)
                {
                    ++p;
                    tmp[p] = arr[rp];
                    ++rp;
                }
                break;
            }
        }
        else
        {
            tmp[p] = arr[rp];
            ++rp;
            if (rp > r)
            {
                while (lp <= mid)
                {
                    ++p;
                    tmp[p] = arr[lp];
                    ++lp;
                }
                break;
            }
        }
    }
    for (int p = l; p <= r; ++p)
    {
        arr[p] = tmp[p];
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    mergesort(0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}