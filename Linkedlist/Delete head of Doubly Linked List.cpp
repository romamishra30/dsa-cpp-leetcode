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
    ListNode *deleteHeadinDLL(ListNode *&head){
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        ListNode* prev = head;
        head = head->next;

        head->prev = nullptr;
        prev->next = nullptr;

        delete prev;
        return head;

    }
};