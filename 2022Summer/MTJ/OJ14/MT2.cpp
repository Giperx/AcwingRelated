//
// Created by Giperx on 2022/8/7.
//
//信号灯
#include<bits/stdc++.h>

using namespace std;
const int N = 100010;
int a[N];
int sum[N];
int main( )
{
    int n, k, b;
    cin >> n >> k >> b;
    int t;
    for (int i = 0; i < b; ++i) {
        cin >> t;
        a[t] = 1;
    }
    sum[0] = a[0];
    for (int i = 1; i <= n; ++i) {
       sum[i] = sum[i - 1] + a[i];
    }
    int res = 1e9;
    for (int i = 0; i + k <= n; ++i) {
        res = min(res, sum[i + k] - sum[i]);
    }
    cout << res << endl;
    return 0;
}