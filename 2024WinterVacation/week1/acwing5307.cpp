//
// Created by Giperx on 2024/1/6.
// 模拟
// 小苹果 n个苹果，依次每天从左往右取走苹果，每次取时间隔两个，总共多少天，第n个苹果第几天取走
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int days = 0, tmp = 0;
    bool flag = true;
    while(n){
        days++;
        // 当最后一个苹果位于每三个一组中第一个时，即可取走
        if((n%3) == 1 && flag) tmp = days, flag = false;
        // 每次都是取走n/3向上取整个苹果
        n -= ((n + 2)/3);
    }
    cout << days << ' ' << tmp;

    return 0;
}