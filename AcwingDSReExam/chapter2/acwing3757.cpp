//
// Created by Giperx on 2024/1/1.
// 重排链表

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    void rearrangedList(ListNode* head) {
        // 特判只有一个元素
        if(!head->next) return;
        // 伪头节点，头节点就是第一个有效元素
        int n = 0;
        for(auto p = head; p; p = p->next) n++;

        int left = (n + 1)/2; // 前半段的结点数
        auto a = head;
        for (int i = 0; i < left - 1; i ++) a = a->next;
        auto b = a->next, c = a->next->next;

        a->next = b->next = nullptr;
        // 后半段链表逆置
        while (c){
            auto o = c->next;
            c->next = b;
            b = c, c = o;
        }

        // 合并
        for(auto p = head, q = b; q;){
            auto o = q->next;
            q->next = p->next;
            p->next = q;
            p = p->next->next;
            q = o;

        }
    }
};