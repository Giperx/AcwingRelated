//
// Created by Giperx on 2022/5/1.
//
//acwing1351密码锁
//枚举 组合计数 容斥定理
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[3], b[3], n;

int single(){
    int x = min(n, 5);
    return x * x * x;
}

int both(){
    if (n <= 5) return n * n * n;

    int res = 1;
    for (int i = 0; i < 3; ++i) {
        int d = abs(a[i] - b[i]);
        res *= max(0, 5 - d) + max(0, 5 - (n - d));
    }
    return  res;
}

int main()
{
    cin >> n;
    for (int i = 0; i < 3; ++i) cin >> a[i];
    for (int i = 0; i < 3; ++i) cin >> b[i];

    cout << single() * 2 - both() << endl;

    return 0;
}





