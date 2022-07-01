//
// Created by Giperx on 2022/4/26.
//
//acwing1824钻石收藏家
//双指针 前缀和 差分
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int n, k;

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int res = 0;
    for (int i = 0; i < n; ++i) {
        int sums = 0;
        for (int j = i; a[j] <= a[i] + k; ++j) {
            if (a[j] - a[i] > k) break;
            sums ++;
        }
        res = max(res, sums);
    }
    cout << res << endl;
    return 0;
}




