//
// Created by Giperx on 2022/4/24.
//
//acwing1725组队井字游戏
// 枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;
set<set<char>> ans[2];
string g[3];

void insert(vector<vector<int>> ps){
    set<char> S;
    for(auto &p : ps){
        int x = p[0], y = p[1];
        S.insert(g[x][y]);
    }

    if (S.size() == 1)  ans[0].insert(S);
    else if (S.size() == 2) ans[1].insert(S);
}

int main()
{
    for (int i = 0; i < 3; ++i) cin >> g[i];

    for (int i = 0; i < 3; ++i) insert({{i, 0}, {i, 1}, {i, 2}});
    for (int i = 0; i < 3; ++i) insert({{0, i}, {1, i}, {2, i}});
    insert({{0, 0}, {1, 1}, {2, 2}});
    insert({{2, 0}, {1, 1}, {0, 2}});

    cout << ans[0].size() << endl;
    cout << ans[1].size() << endl;

    return 0;
}




