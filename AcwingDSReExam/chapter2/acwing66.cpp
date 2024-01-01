//
// Created by Giperx on 2024/1/1.
// 两个链表的的第一个公共结点

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) {
        auto p = headA, q = headB;
        while (p != q){
            p = p ? p->next : headB;
            q = q ? q->next : headA;
        }
        return p;
    }
};