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
        }
        return newHead;
    };

       ListNode* insertBeforeKthElement(ListNode* head,int k, int val){
        if(k==1){
            return insertBeforeHead(head, val);
        }
        ListNode* temp = head;
        int cnt = 0;
        while(temp != nullptr){
            cnt++;
            if(cnt == k)break;
            temp = temp->next;
        }
        if(temp == nullptr){
            return head;
        }
        ListNode* back = temp->prev;
        ListNode* newNode = new ListNode(val, back, temp);
        back->next = newNode;
        temp->prev = newNode;
        return head;

    }
};