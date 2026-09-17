#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]; // 年/月/日的，有采用月/日/年的，还有采用日/月/年
    int order[3][3] = {{0, 1, 2}, {2, 0, 1}, {2, 1, 0}};
    set<int> ans;
    scanf("%d/%d/%d", &arr[0], &arr[1], &arr[2]);
    int monthdays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < 3; ++i)
    {
        int y = arr[order[i][0]], m = arr[order[i][1]], d = arr[order[i][2]];
        if (y < 0 || y > 100 || m < 1 || m > 12 || d <= 0)
        {
            continue;
        }
        if (y < 60)
        {
            y += 2000;
        }
        else
        {
            y += 1900;
        }
        if (m == 2 && d == 29)
        {
            if (!(y % 4 == 0 && (y % 400 == 0 || y % 100 != 0)))
            {
                continue;
            }
        }
        else if (d > monthdays[m])
        {
            continue;
        }
        ans.insert(y * 10000 + m * 100 + d);
    }

    for (auto &a : ans)
    {
        printf("%d-%02d-%02d\n", a / 10000, a / 100 % 100, a % 100);
    }
    return 0;
}