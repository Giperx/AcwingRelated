//
// Created by Giperx on 2024/1/1.
// 日期问题 通过输入的年份和天数判读是几月几号

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int months[13] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

// 判断是否闰年
int is_leap(int year){
    if(year % 4 == 0 && year % 100 || year % 400 == 0) return 1;
    else return 0;
}

// 通过year和month判断这个月有多少天
int get_days(int year, int month){
    if(month == 2) return is_leap(year) + months[month];
    else return months[month];
}
int main(){
    int y, d;
    while(cin >> y >> d){
        int m = 1;
        for (; m <= 12; ++m) {
            // 如果d天数大于当前月份，直接减去
            if (d > get_days(y, m)) d -= get_days(y, m);
            else break;
        }
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    return 0;
}
