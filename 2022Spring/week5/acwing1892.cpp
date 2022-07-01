//
// Created by Giperx on 2022/4/28.
//
//acwing1892奶牛线路
//枚举 模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int a, b, n, res = 1010;

int main()
{

    cin >> a >> b >> n;
    for (int i = 0; i < n; ++i) {
        int pay, m, tmp;
        cin >> pay >> m;
        int cnt = 0; //能否从起点到达终点
        bool flag = false;
        for (int j = 0; j < m; ++j) {
            cin >> tmp;
            if (tmp == a && !flag) cnt++, flag = true; //已计算起点
            if (tmp == b && flag) cnt++; //终点
        }
        if (cnt == 2) res = min(res, pay);
    }
    res = res == 1010 ? -1 : res;
    cout << res << endl;
    return 0;
}




