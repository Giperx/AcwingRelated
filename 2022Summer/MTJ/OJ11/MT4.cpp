//
// Created by Giperx on 2022/7/10.
//
//队内比拼
#include<bits/stdc++.h>

using namespace std;
const int N = 100010;
int ob[N];
int n, m;

int main( )
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b, x;
        cin >> a >> b >> x;
        for (int j = a; j <= b; ++j) {
            if (j == x) continue;
            if (!ob[j]) ob[j] = x;
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << ob[i] << ' ';
    }
    return 0;
}