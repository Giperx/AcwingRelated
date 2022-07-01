//aciwng1800不做最后一个！
//枚举
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, int> hash1 = {
        {"Bessie", 0},
        {"Elsie", 0},
        {"Daisy", 0},
        {"Gertie", 0},
        {"Annabelle", 0},
        {"Maggie", 0},
        {"Henrietta", 0}
};
int n;
int main(){
    cin >> n;
    while(n -- ){
        string name;
        int x;
        cin >> name >> x;
        hash1[name] += x;
    }

    vector<int> q;
    for(auto &[k, v] : hash1) q.push_back(v);
    sort(q.begin(), q.end());

    q.erase(unique(q.begin(), q.end()), q.end());
    if(q.size() == 1) puts("Tie");
    else
    {
        int x = q[1];
        string name;
        int cnt = 0;

        for(auto [k, v] : hash1)
        {
            if(v == x)
            {
                cnt ++;
                name = k;
            }
        }
        if(cnt > 1) puts("Tie");
        else cout << name << endl;
    }

    return 0;
}
