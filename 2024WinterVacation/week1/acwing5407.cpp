//
// Created by Giperx on 2024/1/14.
// 管道，对时间进行二分，check是否满足全部覆盖，覆盖范围要区间合并，区间合并时注意两区间相邻也可以进行合并。
// 因为时间具有二段性，右段时间全部能够覆盖，即找左端点
#include <iostream>
#include <cstring>
#include <algorithm>
#define x first
#define y second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;

int n, m;
PII w[N], q[N];
// w负责存入n对，Li和Si
// q负责check时，保存已经打开的每个阀门，在此时刻能够覆盖的范围

bool check(int mid)
{
    int cnt = 0;
    for (int i = 0; i < n; i ++ )
    {
        int L = w[i].x, S = w[i].y;
        if (S <= mid)
        {
            int t = mid - S;
            // 注意覆盖区域的边界和溢出问题
            int l = max(1, L - t), r = min((LL)m, (LL)L + t);
            q[cnt ++ ] = {l, r};
        }
    }
    // 区间合并
    sort(q, q + cnt);
    int st = -1, ed = -1;
    for (int i = 0; i < cnt; i ++ )
        // 相邻即可合并
        if (q[i].x <= ed + 1) ed = max(ed, q[i].y);
        else st = q[i].x, ed = q[i].y;

    return st == 1 && ed == m;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i ++ ) scanf("%d%d", &w[i].x, &w[i].y);

    int l = 0, r = 2e9;
    // 对时间进行二分
    while (l < r)
    {
        int mid = (LL)l + r >> 1;
        // 找绿色区域左端点
        if (check(mid)) r = mid;
        else l = mid + 1;
    }

    printf("%d\n", r);
    return 0;
}
