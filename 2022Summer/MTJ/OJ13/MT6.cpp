//
// Created by Giperx on 2022/7/31.
//
//分蛋糕   0/10
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int sum[N];
int main( )
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    sort(a, a + n);

    sum[0] = a[0];
    for (int i = 1; i < n; ++i) {
        sum[i] = sum[i - 1] + a[i];
    }
    long long res = 0;
    for (int i = 1; i <= k - 1; ++i) {
        res = res + a[n - i] * sum[n - i - 1];
    }
    cout << res << endl;
    return 0;
}