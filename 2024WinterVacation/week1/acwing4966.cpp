//
// Created by Giperx on 2024/1/5.
// 填充 贪心
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){

    string s;
    cin >> s;

    int res = 0;
    for(int i = 0; i + 1 < s.size(); i ++){
        if(s[i] == s[i + 1] || s[i] == '?' || s[i + 1] == '?'){
            res ++, i ++;
        }
    }
    cout << res;
    return 0;
}