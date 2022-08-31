//
// Created by Giperx on 2022/8/18.
//
//素数
#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int primes[N], cnt;  // primes[0]~primes[cnt-1]存储的是0~n中所有的质数(从小到大)
bool st[N];  // st[i] == true说明i不是质数
void get_primes(int n) {
    for (int i = 2; i <= n; i++) {
        if (!st[i]) primes[cnt++] = i;
        for (int j = i + i; j <= n; j += i) st[j] = true;
    }
}
int main(){
    int tmp;
    cin >> tmp;
    get_primes(tmp);
    for(int i = 0; i < cnt; i ++)   cout << primes[i];

    return 0;
}