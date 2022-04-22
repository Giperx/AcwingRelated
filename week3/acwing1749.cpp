//
// Created by Giperx on 2022/4/22.
//
//acwing1761阻挡广告牌II
// 分类讨论 模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define x first
#define y second
using namespace std;
pair<int, int> a1, b1, a2, b2;

int main()
{
    cin >> a1.x >> a1.y >> b1.x >> b1.y;
    cin >> a2.x >> a2.y >> b2.x >> b2.y;

    //区间求交，重叠的长x，宽y
    int x1 = max(0, min(b1.x, b2.x) - max(a1.x, a2.x));
    int y1 = max(0, min(b1.y, b2.y) - max(a1.y, a2.y));
    int res = 0;
    int la = b1.x - a1.x, wa = b1.y - a1.y; //割草广告长la，宽wa

    if (x1 >= la && y1 < wa && (a2.y <= a1.y || b2.y >= b1.y)) res = la * ( wa - y1);
    else if (y1 >= wa && x1 < la && (a2.x <= a1.x || b2.x >= b1.x)) res = ( la - x1) * wa;
    else if (x1 >= la && y1 >= wa) res = 0;
    else res = la * wa;

    cout << res << endl;
    return 0;
}