//
// Created by Giperx on 2024/1/14.
// 平均，贪心，个数更多的一定补到个数更少的地方，从小到大进行选择
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long LL;
int main(){
//    vector<vector<int>> ss(10);
    vector<int> ss[10];
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        int a, b;
        cin >> a >> b;
        ss[a].emplace_back(b);
    }
    int mean = n / 10;
    for(int i = 0; i < 10; i++){
        if(ss[i].size() > mean) sort(ss[i].begin(), ss[i].end(), greater<int>());
    }

    LL res = 0;
    for(int i = 0; i < 10; i++){
        while(ss[i].size() > mean){
            res += ss[i].back(), ss[i].pop_back();
        }
    }
    cout << res;
    return 0;
}
