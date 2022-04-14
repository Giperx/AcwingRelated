//acwing1812方形牧场
//枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;


int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int a = min(x1, x3);
    int b = max(x2, x4);
    int c = min(y1, y3);
    int d = max(y2, y4);

    int res = max(abs(a - b), abs(d - c));
    cout << res * res << endl;
    return 0;
}

