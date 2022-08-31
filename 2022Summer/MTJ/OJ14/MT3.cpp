//
// Created by Giperx on 2022/8/8.
//
//伐木工小马哥    10/11
#include<bits/stdc++.h>

using namespace std;
const int N = 1e9;
int h[N];
int main( )
{
    int n, m;
    cin >> n >> m;
    int hmax = 0;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        h[tmp]++;
        hmax = max(hmax, h[i]);
    }
    int i = 0;
    int res = 0, cnt = 0;
    for (i = hmax; i >= 1; --i) {
        cnt += h[i];
        res += cnt;
        if (res >= m) break;
    }
    cout << i << endl;
    return 0;
}