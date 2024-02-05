//
// Created by Giperx on 2024/1/14.
// 三国游戏，枚举，贪心
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;
int A[N], B[N], C[N];

int main(){

    vector<int> w[3];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
    for(int i = 0; i < n; i++) cin >> C[i];


    for(int i = 0; i < n; i ++){
        int a = A[i], b = B[i], c = C[i];
        w[0].emplace_back(a - b - c);
        w[1].emplace_back(b - a - c);
        w[2].emplace_back(c - a - b);
    }
    int maxres = 0;
    for(int i = 0; i < 3; i ++){
        long long tmp = 0;
        sort(w[i].begin(), w[i].end(), greater<int>());
        int cnt = 0;
        for(int j = 0; j < w[i].size(); j++){
            tmp += w[i][j];
            if(tmp > 0) {
                cnt = j + 1;
            }
            else break;
        }
        maxres = max(maxres, cnt);
    }
    if(!maxres) maxres = -1;
    cout << maxres;

    return 0;
}