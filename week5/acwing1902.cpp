//
// Created by Giperx on 2022/4/27.
//
//acwing1902马拉松
//枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define x first
#define y second

using namespace std;
const int N = 1e5 + 10;
typedef pair<int, int> PII;
PII q[N];
int n;

int get_dist(PII a, PII b){
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int main()
{
    cin >> n;

    int sums = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> q[i].x >> q[i].y;
        if (i > 1) sums += get_dist(q[i-1], q[i]);
    }

    int d = 0;
    for (int i = 2; i < n; ++i) {
        auto a = q[i - 1], b = q[i], c = q[i + 1];
        d = max(d, get_dist(a, b) + get_dist(b, c) - get_dist(a, c));
    }

    cout << sums - d << endl;
    return 0;
}




