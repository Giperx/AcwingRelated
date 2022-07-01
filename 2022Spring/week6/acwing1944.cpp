//
// Created by Giperx on 2022/5/2.
//
//acwing1944记录保存
//哈希表 STL Map
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int n;

int main()
{
    cin >> n;
    map<vector<string>, int> hash;
    for (int i = 0; i < n; ++i) {
        vector<string> str(3);
        for (int j = 0; j < 3; ++j) {
            cin >> str[j];
        }
        sort(str.begin(), str.end());
        hash[str] ++;
    }
    int res = 0;
    for(auto& [k, v] : hash) res = max(res, v);

    cout << res << endl;
    return 0;
}






