//
// Created by Giperx on 2022/5/9.
//
//acwing2003找到牛！
//枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;
int n;
string str;
int main()
{
    cin >> str;
    int res = 0, cnt = 0;

    for (int i = 1; i <= str.size(); ++i) {
        if (str[i - 1] == ')' && str[i] == str[i - 1]) res += cnt;
        else if (str[i] == '(' && str[i] == str[i - 1]) cnt ++;
    }

    cout << res << endl;
    return 0;
}









