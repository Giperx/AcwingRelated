//
// Created by Giperx on 2022/4/19.
//
//acwing1683困牛放牧
// 分类讨论 贪心
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[4];

int main()
{
    cin >> a[1] >> a[2] >> a[3];
    sort(a + 1, a + 4);
    int mins = 0, maxs = 0;
    if(a[3] - a[1] == 2) mins = 0;
    else if (a[3] - a[2] == 2 || a[2] - a[1] == 2) mins = 1;
    else mins = 2;

    maxs = max(a[3] - a[2] - 1, a[2] - a[1] - 1);
    cout << mins << endl << maxs;
    return 0;
}


