//
// Created by Giperx on 2022/8/10.
//
#include<bits/stdc++.h>
using namespace std;
const int N = 10010;
unsigned a[N];
unsigned Max(unsigned array[], int len){
    int maxBit = sizeof(unsigned) * 8; // 最高位数
    unsigned currBit = 1; // 当前位
    int mark[len]; // 标记被剔除元素的数组，下标对应相应的元素
    int result = 0;
    for (int i = 0; i < len; i++) mark[i] = 1; // 第i个元素为1，表示保留
    currBit = currBit << (maxBit-1);
    for (int i = 0; i < maxBit; i++){
        // 统计
        int count = 0;
        for(int j = 0; j < len; j++){
            if(mark[j] == 1 && (array[j] & currBit) != 0)
                count++;
        }
        if (count > 1){
            // 剔除
            for(int j = 0; j < len; j++){
                if ((array[j] & currBit) == 0)
                    mark[j]=0;  // 标记数组置为0表示剔除
            }
            // 更新结果，如 0100 + 0010 = 0110
            result += currBit;
        }
        // 下一位
        currBit = currBit >> 1;
    }
    return result;
}
int main( )
{
    int T, res = 0;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        memset(a, 0, sizeof a);
        int l = 0;
        cin >> l;
        for (int j = 0; j < l; ++j) {
            cin >> a[j];
        }
        res += Max(a, l);
    }
    cout << res << endl;
    return 0;
}