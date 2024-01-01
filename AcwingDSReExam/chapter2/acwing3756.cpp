//
// Created by Giperx on 2024/1/1.
// 2015 链表去除绝对值相同的元素
// Definition for singly-linked list.
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* filterList(ListNode* head) {
        bool st[10010] = {};
        // 头节点里面也有数据
        st[abs(head->val)] = true;
        for(auto p = head; p->next;){
            if(st[abs(p->next->val)]){
                auto q = p->next;
                p->next = q->next;
                delete q;
            }
            else{
                st[abs(p->next->val)] = true;
                p = p->next;
            }
        }
        return head;
    }
};