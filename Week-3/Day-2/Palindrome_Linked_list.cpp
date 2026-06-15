#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
class Solution {
public:

    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=curr->next;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL) return false;
        if(head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        ListNode* reversekhead=reverse(slow->next);
        slow->next=reversekhead;
        while(reversekhead!=NULL){
            if(head->val!=reversekhead->val){
                return false;
            }
            else{
                head=head->next;
                reversekhead=reversekhead->next;
            }
        }
        return true;
    }
};