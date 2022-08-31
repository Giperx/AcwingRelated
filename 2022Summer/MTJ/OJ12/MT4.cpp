//
// Created by Giperx on 2022/7/16.
//
//描边大师  0
#include<bits/stdc++.h>

using namespace std;
const int N = 100000;
int x[N], y[N], h[N];
int n;
int stx[N], sty[N];
int main( )
{
    int c;
    int cnt = 0, tmpn = 0;
    while (scanf("%d", &c) != EOF){
        if (cnt % 3 == 0) x[tmpn] = c, cnt ++;
        if (cnt % 3 == 1) y[tmpn] = c, cnt ++;
        if (cnt % 3 == 2) h[tmpn++] = c, cnt ++;
    }

    n = -- tmpn;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] >> h[i];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n, y[i] >= x[j]; ++j) {
            if (x[j] >= x[i] && x[j] <= y[i] && h[j] < h[i]) stx[j] = 1;
        }

        for (int j = 0; j < n, y[i] >= x[j]; ++j) {
            if (y[j] <= y[i] && y[j] >= x[i] && h[j] < h[i]) sty[j] = 1;
        }
    }

    int ii = 0, jj = 0;
    for (; ii < n, jj < n;) {
        if (stx[ii]) {
            ii ++;
            continue;
        }
        if (sty[jj]){
            jj ++;
            continue;
        }
        if (stx[ii] < sty[jj]) {
            ii ++;
            cout << x[ii] << ' ' << h[ii] << endl;
        }
        else {
            jj ++;
            cout << y[jj] << ' ' << h[jj] << endl;
        }
    }
    if (ii < n){
        for (int i = ii; i < n; ++i) {
            if (!stx[i]) cout << x[i] << ' ' << h[i] << endl;
        }

        for (int i = jj; i < n; ++i) {
            if (!sty[i]) cout << y[i] << ' ' << h[i] << endl;
        }
    }

    return 0;
}