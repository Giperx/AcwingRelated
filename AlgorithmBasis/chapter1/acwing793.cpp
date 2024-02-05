//
// Created by Giperx on 2024/1/16.
// 高精度乘法，高精度 * 低精度  另高精度*高精度见md
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> mul(vector<int> A, int b){
    vector<int> C;

    int t = 0;
    // 因为在i达到最高位时，进位t可能并不为0
    for (int i = 0; i < A.size() || t; ++i) {
        if (i < A.size()) t += A[i] * b;
        C.emplace_back(t % 10);
        t /= 10;
    }
    // b可能为0，会产生前导零，此时至少保证有1位0留存
    while (C.size() > 1 && C.back() == 0) C.pop_back();

    return C;
}

int main(){
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    // 反转存入
    for (int i = a.size() - 1; i >= 0; i--) {
        A.emplace_back(a[i] - '0');
    }
    auto C = mul(A, b);
    // 逆转回来
    reverse(C.begin(), C.end());
    for (const auto &item: C) {
        cout << item;
    }

}
