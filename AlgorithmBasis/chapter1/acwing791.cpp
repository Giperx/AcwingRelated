//
// Created by Giperx on 2024/1/7.
// 高精度加法
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

vector<int> add(vector<int> &A, vector<int> &B){
    vector<int> C;
    int t = 0;// 进位
    // 因为是倒着存的，所以个位从0位开始
    for(int i = 0; i < A.size() || i < B.size(); i++){
        if(i < A.size()) t += A[i];
        if(i < B.size()) t += B[i];
        C.emplace_back(t % 10); // 加和余数
        t = t / 10; // 进位
    }
    if(t) C.emplace_back(t); // 最高位是否有进位
    return C;
}


int main(){
    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for(int i = a.size() - 1; i >= 0; i --) A.emplace_back(a[i] - '0');
    for(int i = b.size() - 1; i >= 0; i --) B.emplace_back(b[i] - '0');

    auto C = add(A, B);

    for(int i = C.size() - 1; i >= 0; i --) printf("%d", C[i]);


    return 0;
}