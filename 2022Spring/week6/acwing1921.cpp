//
// Created by Giperx on 2022/5/5.
//
//acwing1921重新排列奶牛
//环图 找环 并查集
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;
const int N = 110;
int a[N], b[N], p[N], size[N];
int n;

int find(int x){
    if (x != find(x)) p[x] = find(p[x]);
    return  p[x];
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        b[x] = i;
    }

    for (int i = 0; i < n; ++i) p[i] = i, size[i] = 1;

    for (int i = 0; i < n; ++i) {
        int x = a[i], y = a[b[x]];
        if (find(x) != find(y)){
            size[find(y)] += size[find(x)];
            p[find(x)] = find(y);
        }
    }
    int cnt = 0, m = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i] == 1 && size[i] > 1){
            cnt ++;
            m = max(m, size[i]);
        }
    }
    cout << cnt << ' ' << m << endl;
    return 0;
}








