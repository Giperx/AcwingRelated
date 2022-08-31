//
// Created by Giperx on 2022/8/9.
//
//货比三家
#include<bits/stdc++.h>
#include <vector>
#include <cstdio>
#define x first
#define y second
using namespace std;
typedef pair<double, double> PI;
const int N = 1010;
int n, w;
double m[N], v[N];
int main( )
{
    cin >> n >> w;
    vector<PI> v1;
    for (int i = 0; i < n; ++i) {
        double a, b;
        cin >> a >> b;
        m[i] = a;
        v[i] = b / a;
        v1.push_back({v[i], m[i]});
    }
    sort(v1.begin(), v1.end());
    double cnt = w, res = 0;
    for (int i = 0; i < n; ++i) {
        if (v1[i].y < cnt) {
            cnt -= v1[i].y;
            res += v1[i].x * v1[i].y;
        } else{
            res += cnt * v1[i].x;
            cnt = 0;
            break;
        }
    }
    printf("%.3f", res);
}