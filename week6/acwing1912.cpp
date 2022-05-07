//
// Created by Giperx on 2022/5/7.
//
//acwing1912里程表
//枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;
typedef long long LL;
LL n, m, a[10];
int main()
{
    cin >> n >> m;
    int res = 0;
    for (int i = 3; i <= 17; ++i) {
        for (int j = 0; j < 10; ++j) {
            string str(i, '0' + j);
            for (int k = 0; k < 10; ++k) {
                if (k != j)
                    for (int l = 0; l < i; ++l) {
                        str[l] = '0' + k;
                        LL p = atoll(str.c_str());
                        if (str[0] != '0' && p >= n && p <= m) res ++;
                        str[l] = '0' + j;
                    }
            }
            }
        }
    cout << res << endl;

    return 0;
}








