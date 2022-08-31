//
// Created by Giperx on 2022/7/28.
//
#include<bits/stdc++.h>
//高数考试 暴力
using namespace std;
const int N = 5e6 +  10;
int n, p;
int a[N];
int main( )
{
    cin >> n >> p;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < p; ++i) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int tmp;
        cin >> tmp;
        for (int j = l; j <= r; ++j) {
            a[i]++;
        }
    }
    int res = 100;
    for (int i = 0; i < n; ++i) {
        res = min(res, a[i]);
    }
    cout << res << endl;
    return 0;
}