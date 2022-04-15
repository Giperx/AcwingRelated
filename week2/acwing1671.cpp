//acwing1671三角形
// 枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 110;
int n, res;
pair<int, int> a[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if(i == j || j == k || i == k) continue;
                if(a[i].first == a[j].first && a[i].second == a[k].second)
                    res = max(res, abs(a[j].second - a[i].second) * abs(a[k].first - a[i].first));
            }
        }
    }

    cout << res << endl;
    return 0;
}

