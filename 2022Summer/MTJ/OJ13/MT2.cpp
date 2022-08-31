//
// Created by Giperx on 2022/7/29.
//
//二维坐标点移动
#include<bits/stdc++.h>
using namespace std;
const int N =  55;
int a[N][N], b[N][N];
int n, m;
int main( )
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int k;
    cin >> k;
    for (int t = 0; t < k; ++t) {

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= m - 2; ++j) {
                b[i][j + 1] = a[i][j];
            }
        }

        for (int i = 0; i <= n - 2; ++i) {
            b[i + 1][0] = a[i][m - 1];
        }
        b[0][0] = a[n - 1][m - 1];

        memcpy(a, b, sizeof a);
    }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << b[i][j] << ' ';
            }
            cout << endl;
        }

    return 0;
}