//acwing1788牛为什么过马路
//模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int n, res, a[110] ;

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x = 0, side = 0;
        cin >> x >> side;
        if(!side) side = -1;
        if(!a[x]) a[x] = side;
        else if (a[x] != side){
            res++, a[x] = side;
        }
    }
    cout << res << endl;
    return 0;
}

