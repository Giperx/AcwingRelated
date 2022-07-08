//
// Created by Giperx on 2022/7/7.
//
//acwing4273链表合并
//链表 模拟
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>s
#include <vector>
#define x first
#define y second
using namespace std;
typedef pair<int, int> PII;
const int N = 100010;

int h1, h2, n;
int v[N], ne[N];

int main(){
    cin >> h1 >> h2 >> n;
    while (n --){
        int add, val, nextad;
        cin >> add >> val >> nextad;
        v[add] = val, ne[add] = nextad;
    }

    vector<PII>a, b;
    for (int i = h1; i != -1; i = ne[i]) {
        a.push_back({i, v[i]});
    }
    for (int i = h2; i != -1 ; i = ne[i]) {
        b.push_back({i, v[i]});
    }
    if (a.size() < b.size()) swap(a, b);

    vector<PII> c;
    for (int i = 0, j = b.size() - 1; i < a.size(); i += 2, j --) {
        c.push_back(a[i]);
        if (i + 1 < a.size()) c.push_back(a[i + 1]);
        if (j >= 0) c.push_back(b[j]);
    }

    for (int i = 0; i < c.size(); ++i) {
        printf("%05d %d ", c[i].x, c[i].y);
        if (i + 1 < c.size()) printf("%05d\n", c[i + 1].x);
        else puts("-1");
    }

    return 0;
}