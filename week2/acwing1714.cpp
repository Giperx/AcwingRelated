//
// Created by Giperx on 2022/4/17.
//
//acwing1614混合牛奶
// 模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int c1, c2, c3;
int m1, m2, m3;

int main()
{
    cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
    for(int i = 1; ; )
    {
        if(m1 + m2 > c2) m1 -= c2 - m2, m2 = c2;
        else m2 += m1, m1 = 0;
        i++;
        // cout << m1 << ' ' << m2 << ' ' << m3 << ' ' << endl;
        if(i > 100) break;

        if(m3 + m2 > c3) m2 -= c3 - m3, m3 = c3;
        else m3 += m2, m2 = 0;
        i++;
        // cout << m1 << ' ' << m2 << ' ' << m3 << ' ' << endl;
        if(i > 100) break;

        if(m3 + m1 > c1) m3 -= c1 - m1, m1 = c1;
        else m1 += m3, m3 = 0;
        i++;
        // cout << m1 << ' ' << m2 << ' ' << m3 << ' ' << endl;
        if(i > 100) break;
    }
    cout << m1 << endl << m2 << endl << m3 << endl;
    return 0;
}

