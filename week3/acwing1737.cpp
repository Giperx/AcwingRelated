//
// Created by Giperx on 2022/4/23.
//
//acwing1737传送
// 分类讨论
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int res = abs(a - b);
    cout << min(res, min(abs(a - x), abs(a - y)) + min(abs(b - x), abs(b - y))) << endl;
    return 0;
}



