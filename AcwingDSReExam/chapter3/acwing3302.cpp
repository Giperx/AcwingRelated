//
// Created by Giperx on 2024/1/2.
// 中缀表达式求值
// yxc模板
#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <stack>

using namespace std;

stack<char> op;
stack<int> num;

void eval()
{
    auto b = num.top(); num.pop();
    auto a = num.top(); num.pop();
    auto c = op.top(); op.pop();

    int x;
    if (c == '+') x = a + b;
    else if (c == '-') x = a - b;
    else if (c == '*') x = a * b;
    else x = a / b;
    num.push(x);
}

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> pr{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};
    for (int i = 0; i < s.size(); i ++ )
    {
        if (isdigit(s[i]))
        {
            int j = i, x = 0;
            while (j < s.size() && isdigit(s[j]))
                x = x * 10 + s[j ++ ] - '0';
            num.push(x);
            i = j - 1;
        }
        else if (s[i] == '(') op.push(s[i]);
        else if (s[i] == ')')
        {
            while (op.top() != '(') eval();
            op.pop();
        }
        else
        {
            while (op.size() && op.top() != '(' && pr[op.top()] >= pr[s[i]])
                eval();
            op.push(s[i]);
        }
    }

    while (op.size()) eval();
    cout << num.top() << endl;

    return 0;
}

