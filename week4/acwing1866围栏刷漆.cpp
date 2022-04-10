//acwing1866围栏刷漆
//区间求交
#include <iostream>
#include <algorithm>
using namespace std;
#if 1

int main(){
	int a, b, c ,d;
	int len = max(0, min(b, d) - max(a, c));
	cout << b - a + d - c - len << endl;
	
	
	return 0;
} 

#else // 尝试通过
int main(){
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int res = 0, sum = 0;
    int a[110] = {0};
    for(int i = x1; i <= y1; i ++ ) a[i] |= 1, res++;
    res--;
    
    for(int i = x2; i <= y2; i ++ )
    {
        if(a[i]) sum ++;
        res++;
    }
    if(sum) sum--;
    res--;
    
    cout << res - sum<< endl;
    return 0;
}
#endif 

