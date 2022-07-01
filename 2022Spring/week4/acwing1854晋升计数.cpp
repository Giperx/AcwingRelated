//acwing1854晋升计数
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int a = 0, b= 0, c = 0;
	int x, y;
	cin >> x >> y;
	cin >> x >> y;
	a += y - x;
	cin >> x >> y;
	b += y - x;
	a += b;
	cin >> x >> y;
	c += y - x;
	a += c;
	b += c;
	
	cout << a << endl << b << endl << c << endl;
	
    return 0;
}

