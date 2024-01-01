//
// Created by Giperx on 2023/12/30.
// 进制转换2    M进制的数转换为N进制的数
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int m, n;
    string x;
    cin >> m >> n >> x;

    vector<int> A;
    for(int i = x.size() - 1; i >= 0; i--){
        // 超过十进制，会有字母A~*
        char c = x[i];
        if (c >= 'A') A.emplace_back(x[i] - 'A' + 10);
        else A.emplace_back(x[i] - '0');
    }
    string res;
    if (x == "0") res = "0";
    else {
        while(A.size()){
            int r = 0;
            for (int i = A.size() - 1; i >= 0; i--) {
                A[i] += r * m;
                r = A[i] % n;
                A[i] = A[i] / n;
            }
            while(A.size() && A.back() == 0) A.pop_back();

            if (r < 10) res += to_string(r);
            else res += r - 10 + 'a';
        }
        std::reverse(res.begin(), res.end());
    }
    cout << res << endl;
    return 0;
}
