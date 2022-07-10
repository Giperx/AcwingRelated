//
// Created by Giperx on 2022/7/9.
//
//acwing4276擅长C
//模拟 字符串处理
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;
char g[26][7][6];
bool first = true;
void output(string word){
    //特判
    if (word.empty()) return;
    if (first) first = false;
    else cout << endl;

    //将字母复制到str中
    char str[7][60] = {0};
    for (int i = 0; i < word.size(); ++i) {
        for (int j = 0; j < 7; ++j) {
            for (int k = 0; k < 5; ++k) {
                str[j][k + i * 6] = g[word[i] - 'A'][j][k];
            }
        }
    }
    //每个字母间距变为空格' '
    for (int i = 1; i < word.size(); ++i) {
        for (int j = 0; j < 7; ++j) {
            str[j][i * 6 - 1] = ' ';
        }
    }

    for (int i = 0; i < 7; ++i) {
        cout << str[i] << endl;
    }

}

int main(){
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 7; ++j) {
            cin >> g[i][j];
        }
    }
    string word;
    char c;
    while ((c = getchar()) != -1)   { //EOF
        if (c >= 'A' && c <= 'Z') word += c;
        else {
            output(word);
            word = "";
        }
    }
    output(word);
    return 0;
}