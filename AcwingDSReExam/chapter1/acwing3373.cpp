//
// Created by Giperx on 2023/12/30.
// 进制转换 高精度 长度最多30位十进制数转换为二进制
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
// b进制短除 返回一次短除后的除数
vector<int> div(vector<int> A, int b){
    vector<int> C;
    for (int i = A.size() - 1, r = 0; i >= 0 ; i--) {
        r = r * 10 + A[i]; // 每次考虑前一位余数 * 10 + 当前位 组成的 2位的十进制数
        C.emplace_back(r / b);
        r = r % b; // 更新余数，给后一位使用
    }
    reverse(C.begin(), C.end()); // 逆置除数，让高位到末尾，便于去0
    while (C.size() && C.back() == 0) C.pop_back();
    return C;
}

int main(){
    string s;

    while(cin >> s){
        // cout << s << endl;
        vector<int> A;
        // 将s中的十进制字符串 倒着存入 A中
        for(int i = s.size() - 1; i >= 0; i --){
            A.emplace_back(s[i] - '0');
        }
        // for(auto x:A) cout << x << endl;
        string res;
        if (s == "0") res = "0";
        else{
            while(A.size()){
                // 每次先记录 余数， 再得到短除后的除数
                // 因为是转换二进制数，则十位往上一定能被整除，所以每次的余数只看个位即A[0]
                res += to_string(A[0] % 2); // 得到短除后的余数
                // div 得到每次短除后的除数
                A = div(A, 2);
            }
            // res记录的是每次短除的余数，当时最前面的是第一次的余数，应该逆置到最后一位，才符合正确的进制表达
            std::reverse(res.begin(), res.end());
        }
        cout << res << endl;
    }
    return 0;
}

