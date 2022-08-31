//
// Created by Giperx on 2022/8/6.
//
//跳蚤
#include<bits/stdc++.h>

using namespace std;

int main( )
{
    int n, m, s, res = 0;
    cin >> n >> m >> s;
    n--, m--;
    int l = n / s + 1;
    int w = m / s + 1;
    res = l * w;
    res = res * ((1 + n % s) * (1 + m % s));
    cout << res << endl;
    return 0;
}