//
// Created by Giperx on 2024/1/4.
// 数的范围 有序数组，找到某一数值的左右端点
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
int q[N];
int n, t;
int main(){
    cin >> n >> t;
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }
    while (t--){
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        while(l < r){
            int m = (l + r) >> 1;
            if (q[m] >= x) r = m;
            else l = m + 1;
        }
        if (q[r] == x){
            // 找到左端点
            cout << r << ' ';
            // 因为是继续找右端点，l可以不变
            r = n - 1;
            while (l < r){
                int m = (l + r + 1) >> 1;
                if (q[m] <= x) l = m;
                else r = m - 1;
            }
            cout << l << endl;
        }
        else{
            cout << "-1 -1" << endl;
        }
    }
}
