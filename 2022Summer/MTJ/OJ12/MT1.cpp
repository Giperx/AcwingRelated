//
// Created by Giperx on 2022/7/14.
//
//lowbit 6/10
#include<bits/stdc++.h>

using namespace std;
int lowbit(int n){
    return n & -n;
}
int main( )
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        cout << lowbit(m) << endl;
    }
    return 0;
}