//
// Created by Giperx on 2022/8/11.
//
//括号匹配个数
#include<bits/stdc++.h>

using namespace std;
const int N = 1000010;

int main( )
{
    int *stack = (int *) calloc(N, sizeof (int));
    int *ans = (int *) calloc(N, sizeof (int ));
    int top = 0, Ans = 0;
    char s[N];
    cin >> s;
    memset(stack, 0, N);
    memset(ans, 0, N);
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (s[i] == '('){
            stack[++top] = i;
        }
        else if (top != 0){
            int pos = stack[top--];
            if (pos != 0){
                ans[i] = ans[pos - 1] + 1;
            }
            else{
                ans[i] = 1;
            }
        }
        Ans += ans[i];
    }
    cout << Ans << endl;
    return 0;
}