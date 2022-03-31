//acwing4376数圈圈
//模拟
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio> 
using namespace std;
int t[] = {
    1, 0, 0, 0,
    1, 0, 1, 0,
    2, 1, 1, 2,
    0, 1, 0, 0
};
int n;

int main(){
    cin>>n;
    
    if(!n) cout<<1<<endl;
    else {
        int res = 0;
        while(n){
            res += t[n % 16];
            n /= 16;
        }
        cout<<res<<endl;
        
    }
    return 0;
}
