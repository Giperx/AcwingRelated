//
// Created by Giperx on 2023/12/30.
// 成绩排序
// 结构体排序 运算符重载

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int N = 1010;
int n, m;

struct Person{
    string name;
    int score;

    bool operator< (const Person& t) const{
        return score < t.score;
    }

    bool operator> (const Person& t) const{
        return score > t.score;
    }
}q[N];


int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i ++) cin >> q[i].name >> q[i].score;
    if (!m) stable_sort(q, q + n, greater<Person>());
    else stable_sort(q, q + n );

    for(int i = 0; i < n; i ++){
        cout << q[i].name << ' ' << q[i].score << endl;
    }
    return 0;
}
