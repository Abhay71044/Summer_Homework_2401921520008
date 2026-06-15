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

    ListNode* reverseLinkedlist(ListNode* prev,ListNode* curr){
        if(curr == NULL) return prev;
        ListNode* forward=curr->next;
        curr->next=prev;
        return reverseLinkedlist(curr,forward);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        return reverseLinkedlist(prev,curr);
    }
};