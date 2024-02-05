//
// Created by Giperx on 2024/1/8.
// 高精度减法
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// A >= B
bool cmp(vector<int> &A, vector<int>& B){
    // 先比较位数
    if (A.size() != B.size()) return A.size() > B.size();
    for(int i = A.size() - 1; i >= 0; i --){
        // 从高位开始依次比较大小
        if (A[i] != B[i]) return A[i] > B[i];
    }
    // 位数和数值全部相等
    return true;
}
// A - B, A的位数大等于B
vector<int> sub(vector<int>& A, vector<int>& B){
    vector<int> C;
    for(int i = 0, t = 0; i < A.size(); i ++){
        t = A[i] - t;
        if(i < B.size()) t -= B[i];
        // 判断差
        C.emplace_back((t + 10) % 10);
        // 判断借位
        if (t < 0) t = 1;
        else t = 0;
    }
    // 去除前导零, 至少保留一位
    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}
int main(){
    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for(int i = a.size() - 1; i >= 0; i --) A.emplace_back(a[i] - '0');
    for(int i = b.size() - 1; i >= 0; i --) B.emplace_back(b[i] - '0');
    vector<int> C;
    if(cmp(A, B)){
        C = sub(A, B);
    } else{
        C = sub(B, A);
        printf("-");
    }
    for (int i = C.size() - 1; i >= 0; i--) {
        printf("%d", C[i]);
    }

}
