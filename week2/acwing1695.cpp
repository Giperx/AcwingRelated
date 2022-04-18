//
// Created by Giperx on 2022/4/18.
//
//acwing1695果壳游戏
// 枚举 模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int cnt[4], x[4], n;


int main()
{
    for (int i = 1; i <= 3; ++i) x[i] = i;
    cin >> n;
    int a = 0, b = 0, c = 0;
    while(n -- )
    {
        cin >> a >> b;
        swap(x[a], x[b]);
        cnt[x[c]] ++;
    }
    int res = max({cnt[1], cnt[2], cnt[3]});
    cout << res << endl;
    return 0;
}

