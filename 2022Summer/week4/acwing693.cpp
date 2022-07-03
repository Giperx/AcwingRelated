//
// Created by Giperx on 2022/6/30.
//
//acwing693行程排序
//模拟 哈希表
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <unordered_map>
#include <unordered_set>

using namespace std;


int main(){
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        int n;
        cin >> n;
        unordered_map<string, string> next;
        unordered_set<string> S;
        while (n --){
            string a, b;
            cin >> a >> b;
            next[a] = b;
            S.insert(b);
        }

        string head;
        for (auto& [a, b]: next) {
            if (!S.count(a)){
                head = a;
                break;
            }
        }

        printf("Case #%d: ", i);
        while (next[head].size()){
            cout << head << '-' << next[head] << ' ';
            head = next[head];
        }
        cout << endl;
    }
    return 0;
}





