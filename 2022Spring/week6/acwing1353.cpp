//
// Created by Giperx on 2022/5/3.
//
//acwing1353滑雪场设计
//枚举 贪心
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;
const int N = 1010;
int a[N], n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    int res = 1e8 + 10;
    for (int i = 0; i <= 83; ++i) {
        int cost = 0;
        for (int j = 1; j <= n; ++j) {
            if (a[j] < i) cost += (i - a[j]) * (i - a[j]);
            else if (a[j] > i + 17) cost += (a[j] - i - 17) * (a[j] - i - 17);

        }
        res = min(cost, res);
    }
    cout << res << endl;

    return 0;
}







