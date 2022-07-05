//
// Created by Giperx on 2022/7/5.
//
//acwing4269校庆
//哈希表
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    unordered_set<string> hash;

    while (n --){
        string name;
        cin >> name;
        hash.insert(name);
    }

    cin >> m;
    int res = 0;
    string a, b;
    while (m --){
        string name;
        cin >> name;
        if (hash.count(name)) {
            res++;
            if (a.empty() || a.substr(6, 8) > name.substr(6, 8)) a = name;
        }
        if (b.empty() || b.substr(6, 8) > name.substr(6, 8)) b = name;
    }

    cout << res << endl;
    if (res) cout << a << endl;
    else cout << b << endl;
    return 0;
}