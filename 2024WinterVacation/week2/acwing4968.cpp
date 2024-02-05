//
// Created by Giperx on 2024/1/12.
// 873欧拉函数
// 区别是欧拉函数求 1 ~ N，而该题不包括N，但是只要N大于1，N与自己肯定不互质
// 互质定义：两个数的最大公约数是1
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;

const int MOD = 998244353;

LL qmi(LL a, LL b) // 快速幂
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    LL a, b;
    cin >> a >> b;

    if (a == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    LL res = a, x = a;
    for (int i = 2; i * i <= x; i ++ )
        if (x % i == 0)
        {
            while (x % i == 0) x /= i;
            res = res / i * (i - 1);
        }

    if (x > 1) res = res / x * (x - 1);

    cout << res * qmi(a, b - 1) % MOD << endl;
    return 0;
}