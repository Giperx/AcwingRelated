//
// Created by Giperx on 2022/7/9.
//
//萨卡兹人
#include<bits/stdc++.h>

using namespace std;

int main( )
{
    string dna;
    cin >> dna;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        l1--, r1--, l2--, r2--;
        bool flag = true;
        for (int j = l1, k = l2; j <= r1; ++j, ++k) {
            if (dna[j] != dna[k]){
                flag = false;
                break;
            }
        }
        if (flag) puts("Yes");
        else puts("No");
    }
    return 0;
}