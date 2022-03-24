//acwing3346ÄãÖªµÀÄãµÄABCÂğ 123 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[8];

int  main(){
    for(int i = 0; i < 7; i++) scanf("%d", &a[i]);
    
    sort(a, a + 7);
    cout<<*a<<' '<<*(a+1)<<' '<<*(a+6) - (*a + *(a+1) )<<endl;
    
    return 0;
}
