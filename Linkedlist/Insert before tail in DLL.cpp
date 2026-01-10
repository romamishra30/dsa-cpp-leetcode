#include<bits/stdc++.h>
using namespace std;

class ListNode
{
 // Definition for doubly-linked list.
   public:
       int data;
       ListNode *prev; 
       ListNode *next;
       ListNode() : data(0), prev(nullptr), next(nullptr) {}
       ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};

class Solution {
public:
       ListNode* insertBeforeHead(ListNode* head, int val){
        ListNode* newHead = new ListNode(val, nullptr, head);
        if(head != nullptr){
            head->prev = newHead;
            return newHead;
        }
        return newHead;
};

       ListNode* insertBeforeTail(ListNode* head, int val){
        if(head->next == nullptr){
            return insertBeforeHead(head, val);
        }
        ListNode* tail = head;
        while(tail->next != nullptr){
            tail = tail->next;
        }
        ListNode* back = tail->prev;
        ListNode* newNode = new ListNode(val, back, tail);
        back->next = newNode;
        tail->prev = newNode;
        return head;
    }
};