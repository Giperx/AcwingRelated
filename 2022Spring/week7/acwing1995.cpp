//
// Created by Giperx on 2022/5/10.
//
//acwing1995见面与问候
//模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 1000010;
int n, m;
int a[N], b[N];
int main()
{
    scanf("%d %d", &n, &m);
    int t = 0;
    for (int i = 0; i < n; ++i) {
        int d;
        char r;

        scanf("%d %c", &d, &r);
        int v = 1;
        if (r == 'L') v = -1;
        while(d--){
            t++;
            a[t] = a[t - 1] + v;
        }
    }
    while(++t < N) a[t] = a[t - 1];

    t = 0;
    for (int i = 0; i < m; ++i) {
        int d;
        char r;

        scanf("%d %c", &d, &r);
        int v = 1;
        if (r == 'L') v = -1;
        while(d--){
            t++;
            b[t] = b[t - 1] + v;
        }
    }
    while(++t < N) b[t] = b[t - 1];

    int res = 0;
    for (int i = 1; i < N; ++i) {
        if (a[i] == b[i] && a[i - 1] != b[i - 1]) res ++;
    }
    printf("%d", res);
    return 0;
}










