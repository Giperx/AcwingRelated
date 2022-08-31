//
// Created by Giperx on 2022/8/21.
//
//蛇形前进 0/10
#include<bits/stdc++.h>

using namespace std;
const int N = 1010;
bool st[N][N];
int a[N][N], res, m, n;
int dfs(int x, int y, int r){
    r += a[x][y], st[x][y] = true;
    if (x == n - 1 && y == m - 1) {
        res = max(res, r);
        return 0;
    }
    if (x != 0 && x != n - 1 && y != m - 1){
        int mx = x + 1, my = y;
        if (a[x - 1][y] > a[x + 1][y] && a[x - 1][y] > a[x][y +1]) mx = x - 1, my = y;
        if (a[x + 1][y] > a[x - 1][y] && a[x + 1][y] > a[x][y +1]) mx = x + 1, my = y;
        if (a[x][y + 1] > a[x - 1][y] && a[x][y + 1] > a[x - 1][y]) mx = x, my = y + 1;
        dfs(mx, my, r);
    }

    if (x == 0 && y != m - 1){
        int mx = x + 1, my = y;
        if (a[x + 1][y] >= a[x][y + 1]) mx = x + 1, my = y;
        else mx = x, y = y + 1;
        dfs(mx, my, r);
    }

    if (x == n - 1 && y != m - 1){
        int mx = x, my = y + 1;
        if (a[x][y + 1] >= a[x - 1][y]) mx = x, my = y + 1;
        else mx = x - 1, my = y;
        dfs(mx, my, r);
    }

    if (y == m - 1){
        int mx = x + 1, my = y;
        dfs(mx, my, r);
    }

    return 0;
}
int main( )
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    dfs(0, 0, 0);
    cout << res << endl;
    return 0;
}
