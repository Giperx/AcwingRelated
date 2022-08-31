//
// Created by Giperx on 2022/8/22.
//
//环形喂猪  6/10
#include<bits/stdc++.h>
using namespace std;

const int N = 200020;
int a[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt = 0;
    long long res = 0;
    for (int i = n - 1; i >= 0; i -= 2) {
        if (cnt == m) break;
        cnt++;
        res += a[i];
    }
    if (cnt != m) cout << "Error!" << endl;
    else cout << res << endl;
    return 0;
}