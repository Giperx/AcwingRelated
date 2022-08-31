//
// Created by Giperx on 2022/7/14.
//
//元旦晚会 8/10
#include<bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;
int minMovesToMakePalindrome(string s) {
    int n = s.size(), ans = 0;
    for (int i = 0, j = n - 1; i < j; i++) {
        for (int k = j; i != k; k--) if (s[i] == s[k]) {
            // 字母出现偶数次的情况，模拟交换
            for (; k < j; k++) swap(s[k], s[k + 1]), ans++;
            j--;
            goto OK;
        }
        // 字母出现奇数次的情况，计算它距离中间还有多少距离
        ans += n / 2 - i;
        OK: continue;
    }
    return ans;
}

int main( )
{
    string word;
    cin >> word;
    cout << minMovesToMakePalindrome(word);
    return 0;
}

