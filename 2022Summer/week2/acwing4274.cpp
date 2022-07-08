//
// Created by Giperx on 2022/7/8.
//
//acwing4274后缀表达式
//递归 树的遍历
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 25;
string v[N];
int l[N], r[N];
bool st[N];

void dfs(int u){
    cout << '(';
    if (l[u] == -1 && r[u] == -1){
        cout << v[u];
    }
    else if (l[u] != -1 && r[u] != -1){
        dfs(l[u]);
        dfs(r[u]);
        cout << v[u];
    }
    else{
        dfs(r[u]);
        cout << v[u];
    }
    cout << ')';
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i] >> l[i] >> r[i];
        if (l[i] != -1) st[l[i]] = true;
        if (r[i] != -1) st[r[i]] = true;
    }

    int root;
    for (int i = 1; i <= n; ++i) {
        if (!st[i]) root = i;
    }

    dfs(i);
    return 0;
}