//
// Created by Giperx on 2022/4/20.
//
//acwing11470水桶传递队列
// 分类讨论
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
char a[15];
pair<int, int> bs, ls, rs;

int main()
{
    for (int i = 0; i < 10; ++i) {
        cin >> a;
        for (int j = 0; j < 10; ++j) {
            if (a[j] == 'B') bs.first = i, bs.second = j;
            else if (a[j] == 'L') ls.first = i, ls.second = j;
            else if (a[j] == 'R') rs.first = i, rs.second = j;
        }
    }
    int res = abs(ls.first - bs.first) + abs(ls.second - bs.second);
    if(ls.first == bs.first && rs.first == ls.first && rs.second < max(ls.second, bs.second)  && rs.second > min(ls.second, bs.second) ||
       ls.second == bs.second && rs.second == ls.second && rs.first > min(ls.first, bs.first) && rs.first < max(ls.first, bs.first))
        res += 2;

    cout << res - 1 << endl;

    return 0;
}



