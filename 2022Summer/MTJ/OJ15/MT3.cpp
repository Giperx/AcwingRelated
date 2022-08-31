//
// Created by Giperx on 2022/8/19.
//
//并集 6/10
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
const int N = 100010;
char a[N], b[N];
//集合的交集、并集运算
string quchong(string str)          //字符串去重
{
    if(str.size()<2)   return str;
    string tmp_str("\0");
    tmp_str += str[0];
    string::size_type j;
    for(string::size_type i=1 ; i<str.size() ; i++)
    {
        for(j=0 ; j<tmp_str.size() ; j++)
            if(tmp_str[j]==str[i])  break;
        if(j==tmp_str.size())   tmp_str+=str[i];
    }
    return tmp_str;
}
//集合的差集、补集运算
string quziji(string str,string temp)      //字符串去子集
{
    string result ;
    for (int i = 0; i < str.size(); i++)
    {
        int flag = 0;
        for (int j =0;j < temp.size();j++)
            if (temp[j] == str[i])  flag = 1;
        if (flag == 0)  result += str[i];
    }
    return result;
}

int main()
{
    string str3;
    char temp[128];
    int len1,len2,num=0,k;
    int ma, nb;
    cin >> ma >> nb;
    for (int i = 0; i < ma; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < nb; ++i) {
        cin >> b[i];
    }
    string str1(a);
    string str2(b);
    len1 = str1.length();
    len2 = str2.length();
    str3 = str1 + str2;

    for(int i = 0;i < len1; i++)
        for(int j = 0;j < len2 ; j++)
            if(str1[i] == str2[j]) temp[num++]=str1[i];
    temp[num] = '\0';
    str1 = quchong(quziji(str1, quchong(temp)));
    str2 = quchong(quziji(str2, quchong(temp)));
    str3 = str1 + str2;
    str3 = quchong(str3);

    for (int i = str3.length() - 1; i >= 0; --i) {
        cout << str3[i] << ' ';
    }
}

