//
// Created by Giperx on 2022/8/20.
//
//挑珍珠
#include<bits/stdc++.h>

using namespace std;
const int N = 2010;
int a[N], b[N];
int c1, c2, c3;
int am = 2010, bm = 2010;
bool fomu(int a, int b){
    if (c1 * (a - am) + c2 * (b - bm) <= c3) return true;
    else return false;
}
int main( )
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        am = min(am, a[i]), bm = min(bm, b[i]);
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (fomu(a[i], b[i])) res ++;

    }
    cout << --res << endl;
    return 0;
}
