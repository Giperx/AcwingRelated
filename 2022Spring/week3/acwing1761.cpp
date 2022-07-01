//
// Created by Giperx on 2022/4/21.
//
//acwing1761阻挡广告牌
// 计算集合 区间求交
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define x first
#define y second
using namespace std;
pair<int, int> a1, b1, a2, b2, a3, b3;
int main()
{
    cin >> a1.x >> a1.y >> b1.x >> b1.y;
    cin >> a3.x >> a3.y >> b3.x >> b3.y;
    cin >> a2.x >> a2.y >> b2.x >> b2.y;

    int x1 = max(0, min(b1.x, b2.x) - max(a1.x, a2.x));
    int y1 = max(0, min(b1.y, b2.y) - max(a1.y, a2.y));

    int x2 = max(0, min(b3.x, b2.x) - max(a3.x, a2.x));
    int y2 = max(0, min(b3.y, b2.y) - max(a3.y, a2.y));

    int sums =( b1.y - a1.y ) * ( b1.x - a1.x ) + ( b3.y - a3.y ) * ( b3.x - a3.x );

    cout << sums - x1 * y1 - x2 * y2 << endl;

    return 0;
}



