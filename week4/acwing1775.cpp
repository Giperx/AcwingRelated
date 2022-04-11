//acwing1775丢失的牛
//模拟
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int x, y, res;
int a[12] = {1, -2, 4, -8, 16, -32, 64, -128, 256, -512, 1024, -2048 };

int main()
{
   cin >> x >> y;
   int x1 = x;
   if(x <= y){ // 人在奶牛左边
       for(int i = 0; i <= 11; i ++ ){
           int tmp = x1 + a[i]; //下一目的位置
           if(tmp >= y){ //超过或到达奶牛位置
               res += y - x;
               break;
           }
           res += abs(x - tmp); //移动距离是人前后两次位置之差
           x = tmp; //更新人的位置
       }
   }
   else{//人在奶牛右边
       for(int i = 0; i <= 11; i ++ ){
           int tmp = x1 + a[i];
           if(tmp <= y){
               res += x - y;
               break;
           }
           res += abs(x - tmp);
           x = tmp;
       }
   }

    cout << res << endl;
    return 0;
}

