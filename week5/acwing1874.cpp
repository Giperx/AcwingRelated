//
// Created by Giperx on 2022/4/30.
//
//acwing1874哞加密
//hash 枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <unordered_map>
using namespace std;
const int N = 55;

int n, m;
string g[N];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> g[i];
    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    unordered_map<string, int> hash;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < 8; ++k) {
                int x = i, y = j;
                string s(1, g[x][y]);

                bool flag = true;
                for (int l = 0; l < 2; ++l) {
                    x += dx[k], y += dy[k];
                    if (x < 0 || x >= n || y < 0 || y >= m){
                        flag = false;
                        break;
                    }
                    s += g[x][y];
                }

                if (flag && s[0] != s[1] && s[1] == s[2] && s[0] != 'M' && s[1] != 'O')
                    hash[s] ++;
            }
        }
    }
    int res =  0;
    for(auto& [k, v] : hash) res = max(res, v);
    cout << res << endl;
    return 0;
}





