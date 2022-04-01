//acwing1442单词处理器
//模拟
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio> 
using namespace std;
const int N = 100;

#if 1
int main(){
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	while(n--){
		string word;
		cin >> word;
		if(cnt + word.size() <= k){
			if(cnt) cout << ' ';
			cout << word;
			cnt += word.size() ;
		}
		else{
			cout << endl << word;
			cnt = word.size() ;
		}
		
	}
	return 0;
}

#else //尝试 通过
char c[100];
int n, k;

int main(){
    cin>>n>>k;
    
    int cnt = 0;
    scanf("%s",c);
    cout<<c;
    n--;
    cnt += strlen(c);
    
    while(n--){
    	scanf("%s",c);
    	int tmp = strlen(c);
    	cnt += tmp;
    	if(cnt > k) {
    		cnt = tmp;
    		cout<<endl;	
    		cout<<c;
		}
		else	cout<<' '<<c;
	}
    return 0;
}
#endif

