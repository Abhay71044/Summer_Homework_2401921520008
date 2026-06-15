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

    int findLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            head = head->next;
            len++;
        }
        return len;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = findLength(head);

        if(n == len){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int pos = len - n;  
        ListNode* curr = head;

        for(int i = 1; i < pos; i++){
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};