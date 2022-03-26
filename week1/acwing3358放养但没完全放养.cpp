//acwing3358放养但没完全放养
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int p[26];

int main(){
    string str;
    cin>>str;
    
    for(int i = 0; i < 26; i++) p[str[i] - 'a'] = i;
    
    cin>>str;
    int res = 1;
    for(int i = 1; i < str.size(); i++ ) {
        if(p[str[i] - 'a'] <= p[str[i - 1] - 'a']) res++;
    }
    cout<<res<<endl;
    return 0;
}
