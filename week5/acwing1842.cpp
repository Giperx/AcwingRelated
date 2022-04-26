//
// Created by Giperx on 2022/4/25.
//
//acwing1842牛奶桶
//枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int x, y, m , res;

int main()
{
    cin >> x >> y >> m;
    for (int i = 0; i <= m / x; ++i)
        for (int j = 0; j <= (m - i * x) / y; ++j)
            res = max(res, i * x + j * y);

    cout << res << endl;
    return 0;
}



