//
// Created by Giperx on 2022/7/15.
//
//苹果树的高度 8/14
#include<bits/stdc++.h>
using namespace std;
const int N = 5000;

int n;
int maxm = 0;
long long a[N][2500000];
long long cnt[N];
void dfs(int u, int h){


    if (cnt[u] == 0) maxm = max(maxm, h);

    for (int i = 0; i < cnt[u]; ++i) {
        dfs(a[u][i], h + 1);

    }

}

int main( )
{
    cin >> n;
    for (int i = 1; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a[tmp][cnt[tmp] ++] = i + 1;
    }

    dfs(1, 1);
    cout << maxm;
    return 0;
}