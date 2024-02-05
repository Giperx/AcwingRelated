//
// Created by Giperx on 2024/1/21.
// 翻转 101 -> 111  010 -> 000
// 00或11不能操作
// 翻转操作后不可逆
// 操作顺序不影响结果
// 从左往右考虑字符：相同则一定不能操作；不相同则一定需要操作。
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, t;
    while(n--){
       cin >> t;
       cin >> s;
       int res = 0;
        for (int i = 0; i < t.size(); ++i) {
            if (t[i] != s[i]){
                if (i == 0 || i == t.size() - 1) {
                    cout << -1 << endl;
                    break;
                }
                else{
                    if (s[i - 1] == s[i + 1] && s[i - 1] != s[i]){
                        s[i] = t[i];
                        res ++;
                    }
                    else{
                        cout << -1 << endl;
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}
