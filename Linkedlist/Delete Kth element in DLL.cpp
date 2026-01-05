#include <bits/stdc++.h>
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
       ListNode *deleteHead(ListNode *&head){
        if(head == nullptr || head->next == nullptr){
            delete head;
            return nullptr;
        }
        ListNode *temp = head;
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;

        delete temp;
        return head;
    };

       ListNode *deleteTail(ListNode *&head){
        if(head == nullptr || head->next == nullptr){
            delete head;
            return nullptr;
        }
        ListNode *tail = head;
        while(tail->next != nullptr){
            tail = tail->next;
        }
        ListNode *back = tail->prev;
        tail->prev = nullptr;
        back->next = nullptr;

        delete tail;
        return head;
    };

    
    ListNode *deleteKthEle(ListNode *&head, int x){
        if(head == nullptr){
            return nullptr;
        }
        if(x ==1) return deleteHead(head);
        
        ListNode *temp = head;
        int cnt = 1;
        
        while(temp != nullptr){
            if(cnt == x)break;
            temp = temp->next;
            cnt++;
        }

        if(temp == nullptr){
            return head;
        }
        ListNode *back = temp->prev;
        ListNode *front = temp->next;


        if(back == nullptr && front == nullptr){
            delete temp;
            return nullptr;
        }
        else if(front == nullptr){
            return deleteTail(head);
        }
        else{
            back->next = front;
            front->prev = back;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return head;
        }

    }

};