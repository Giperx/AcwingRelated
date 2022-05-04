//
// Created by Giperx on 2022/5/4.
//
//acwing1929镜子田地
//环路 最长路 图的遍历
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;
const int N = 1010;
int n, m;
char g[N][N];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0 , -1};

int dfs(int x, int y, int d){
    if (x < 0 || x >= n || y < 0 || y >= m) return 0;

    if (g[x][y] == '/') d ^= 1;
    else d ^= 3;

    return dfs(x + dx[d], y + dy[d], d) + 1;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> g[i];
    int res = 0;
    for (int i = 0; i < n; ++i) {
        res = max(res, dfs(i, 0, 1));
        res = max(res, dfs(i, m - 1, 3));
    }
    for (int i = 0; i < m; ++i) {
        res = max(res, dfs(0, i, 2));
        res = max(res, dfs(n - 1, i, 0));
    }
    cout << res << endl;
    return 0;
}







