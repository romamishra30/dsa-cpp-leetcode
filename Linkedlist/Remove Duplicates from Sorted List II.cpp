#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicate(ListNode* head){
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while(head != nullptr){
            if(head->next && head->val == head->next->val){
                int dupVal = head->val;

                while(head != nullptr && head->val == dupVal){
                    head = head->next;
                }
                prev->next = head;
            }else{
                prev = prev->next;
                head = head->next;
            }
        }
        return dummy->next;
    }
};