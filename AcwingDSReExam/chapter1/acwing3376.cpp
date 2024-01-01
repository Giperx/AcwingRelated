//
// Created by Giperx on 2023/12/30.
// 成绩排序2 按成绩从小到大排，成绩相同则按学号从小到大排
#include "iostream"
#include "cstring"
#include "algorithm"
using namespace std;
const int N = 110;

struct Person{
    int id, score;

    bool operator< (const Person& t) const{
        if (score != t.score) return score < t.score;
        else return id < t.id;
    };
}p[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> p[i].id >> p[i].score;
    }
    sort(p, p + n);
    for (int i = 0; i < n; ++i) {
        cout << p[i].id << ' ' << p[i].score << endl;
    }
    return 0;
}
