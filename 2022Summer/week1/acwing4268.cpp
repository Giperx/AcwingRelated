//
// Created by Giperx on 2022/7/3.
//
//acwing4268性感数字
//枚举 质数 试除法
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
bool judgePrime(int i){
    if (i < 2) return false;
    for (int j = 2; j <= i / j; ++j) {
        if (i % j == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if (judgePrime(n) && judgePrime(n - 6)){
        cout << "Yes" << endl << n - 6 << endl;
        return 0;
    }
    if (judgePrime(n) && judgePrime(n + 6)){
        cout << "Yes" << endl << n + 6 << endl;
        return 0;
    }

    for (int i = n + 1;; ++i) {
        if (judgePrime(i) && (judgePrime(i + 6) || judgePrime(i - 6))){
            cout << "No" << endl << i << endl;
            return 0;
        }
    }
    return 0;
}