//
// Created by Giperx on 2024/1/1.
// 日期累加 根据输入的年月日，计算某个天数之后的年月日
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int months[13] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int is_leap(int year){
    if (year % 4 == 0 && year % 100 || year % 400 == 0) return 1;
    else return 0;
}

int get_days(int year, int month){
    if (month == 2) return is_leap(year) + months[2];
    else return months[month];
}
int get_year_days(int year, int month){
    if (month <= 2) return 365 + is_leap(year);
    else return 365 + is_leap(year + 1);
}


int main(){
   int T;
   cin >> T;
   int y, m, d, s;
   while(T--){
       cin >> y >> m >> d >> s;
       // 先整年整年判断
       // 特判2月29日
       if (m == 2 && d == 29) s--, m = 3, d = 1;
       while(s > get_year_days(y, m)){
            s -= get_year_days(y, m);
            y++;
       }
       // 天数不足一年后，再一天一天模拟
       while (s--){
           // 超过一个月，日归1，月份+1
           if (++d > get_days(y, m)){
               d = 1;
               // 超过一年，月份归1，年数+1
               if (++m > 12){
                   y++, m = 1;
               }
           }
       }
       printf("%04d-%02d-%02d\n", y, m, d);
   }

    return 0;
}