//
// Created by Giperx on 2024/1/6.
// 公路 贪心 赊账，每次到当前站点时，看看欠了多少油，再取前面价钱最小值去加油
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10;
int v[N], a[N];
typedef long long LL;

int main(){
    int n, d;
    cin >> n >> d;
    for(int i = 1; i < n; i ++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
    }
    LL res = 0, dist = 0, oil = 0;
    int price = a[1];

    for(int i = 2; i <= n; i ++){
        // 走到当前站点的距离
        dist += v[i - 1];
        // 欠了多少升油，向上取整
        LL t = (dist + d - 1) / d - oil;
        // 补上欠的油钱
        res += price * t;
        // 加上欠的油
        oil += t;

        price = min(price, a[i]);
    }
    cout << res;
    return 0;
}
