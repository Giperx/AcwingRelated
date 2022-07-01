//acwing1659社交距离 I
//分类讨论 贪心
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
#if 1
const int N = 1e5 + 10;
int n, m;
char str[N];
int p[N];

int main(){
    scanf("%d%s", &n, str + 1);
    for (int i = 1; i <= n; ++i) {
        if(str[i] == '1') p[++ m] = i;
    }

    if(!m) cout << n - 1 << endl;
    else{

        int xmin = N;
        for (int i = 1; i < m; ++i)
            xmin = min(xmin, p[i + 1] - p[i]);

        int y = max((p[1] - 1) / 2, (n - p[m]) / 2);
        for (int i = 1; i < m; ++i)
            y = max(y, (p[i + 1] - p[i]) / 3);

        int y1 = p[1] - 1, y2 = n - p[m];
        if(y1 < y2) swap(y1, y2);
        for (int i = 1; i < m; ++i) {
            int d = (p[i + 1] - p[i]) /2;
            if(d >= y1) y2 = y1, y1 = d;
            else if(d > y2) y2 = d;
        }
        cout << min(xmin, max(y, y2)) << endl;
    }
    return 0;
}
#else //尝试，只过一半数据
const int N = 1e5 + 10;
int n, b[N];

char a[N];
int main()
{
    cin >> n;
    cin >> a;
    int cnt = 0, m = 0, headl = 0, rairl = 0;
    bool flagHead = false;
    for (int i = 0; i < n; ++i) {
        if(a[i] == '1' ){
            cnt++;
            if(cnt > 1 && !flagHead) headl = cnt;
            if(cnt > 1) b[m++] = cnt;
            flagHead = true;
            cnt = 0;
        }
        else{
            cnt++;
            if(i == n - 1) b[m++] = cnt, rairl = cnt;
        }

    }
//    for (int i = 0; i < m; ++i) {
//        cout << b[i] << ' ';
//    }
    sort(b, b+m, greater<int>());

    int res1 = min(b[m - 1], max(headl - 1 >> 1, max(b[0] / 3, rairl >> 1)));

    int min1 = b[0] >> 1, min2 = b[1] >> 1;
    int res2 = min(min1, min2);



    cout << max(res1, res2) << endl;
    return 0;
}
#endif
