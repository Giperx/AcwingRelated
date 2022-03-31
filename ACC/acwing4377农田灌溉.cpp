//acwing4377农田灌溉
//模拟
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio> 
#include<cmath>
using namespace std;

const int N = 210;

int T, n, m;
int g[N];

int main(){
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i = 1; i <= m; i++ ) cin>>g[i];
        int res = 0;
        res = max(g[1], n - g[m] + 1);
        
        for(int i = 1; i < m; i++ ) {
            res = max(res , (g[i] + g[i + 1]) / 2 - g[i] + 1);
        }
        cout<<res<<endl;
    }
    
    return 0;
}
