//
// Created by Giperx on 2022/5/11.
//
//acwing1986镜子
//枚举 模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 210, INF = 1e8;
int n;
struct Mirror{
    int x, y;
    char c;
}q[N];

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void rotate(char& c){
    if(c == '/') c = '\\';
    else c = '/';
}

bool check(){
    int d = 1, k = 0;
    for (int i = 0; i < 2 * (n + 1); ++i) {
        int id = -1, len = INF;
        for (int j = 1; j <= n + 1; ++j) {
            if (k == j) continue;
            if (q[k].x + abs(q[k].x - q[j].x) * dx[d] != q[j].x) continue;
            if (q[k].y + abs(q[k].y - q[j].y) * dy[d] != q[j].y) continue;
            int t = abs(q[k].x - q[j].x) + abs(q[k].y - q[j].y);
            if (t < len) len = t, id = j;
        }
        if (id == -1) return false;
        if (id == n + 1) return true;
        k = id;
        if (q[id].c == '/') d ^= 1;
        else d ^= 3;

    }
    return false;
}

int main()
{
    cout << '1' << endl;
    cin >> n;
    cin >> q[n + 1].x >> q[n + 1].y;

    for (int i = 1; i <= n; ++i)
        cin >> q[i].x >> q[i].y >> q[i].c;

    if (check()) puts("0");
    else{
        for (int i = 1; i <= n; ++i) {
            rotate(q[i].c);
            if (check()){
                cout << i << endl;
                return 0;
            }
            rotate(q[i].c);
        }
        puts("-1");
    }
    return 0;
}











