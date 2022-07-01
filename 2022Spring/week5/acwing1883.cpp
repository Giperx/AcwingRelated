//
// Created by Giperx on 2022/4/29.
//
//acwing1883删减
//栈
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <sstream>
using namespace std;


int main()
{
    string s, t, stk;
    cin >> s >> t;
    for(auto c : s){
        stk += c;
        if (stk.size() >= t.size() && stk.substr(stk.size() - t.size(), t.size()) == t){
            stk.erase(stk.size() - t.size(), stk.size());
        }
    }
    cout << stk << endl;

    return 0;
}




