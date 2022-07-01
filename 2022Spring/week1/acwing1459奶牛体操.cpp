//acwing1459ÄÌÅ£Ìå²Ù 
//Ã¶¾Ù 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio> 
using namespace std;
const int N = 25;

int t[11][N];
int k, n;

int main(){
    cin>>k>>n;
    for(int i = 1; i <= k ; i ++)
    	for(int j = 1; j <= n; j++){
    		int m = 0;
    		cin>>m;
    		t[i][m] = j;
		}
	
	int res = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			
    		bool flag = false;
			for(int o = 1; o <= k; o++){
				if(t[o][i] >= t[o][j]) flag = true;
			}
			if(!flag) res++;
		
		}
	
	cout<<res<<endl;
    
    
    return 0;
}
