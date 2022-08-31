//
// Created by Giperx on 2022/7/9.
//
//上色    3/10
#include<bits/stdc++.h>
using namespace std;
const int N = 5050;
int a[N];
int main( )
{
    int n, maxi = 0, maxi2 = 0, res = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (maxi != 0 && a[i] < maxi && a[i] > maxi2) maxi2 = a[i];
    }
//    cout << maxi << ' ' << maxi2 << endl;
    for (int i = 2; i <= maxi; ++i) {
//        if (i == maxi2 + 1){
//            res ++;
//            break;
//        }
        for (int j = 0; j < n; ++j) {
            if (a[j] >= i){
                if (j + 1 < n)
                    if (a[j + 1] < i) res ++;
                if (j + 1 == n) res ++;
            }

        }
    }
    cout << res << endl;
    return 0;
}