/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*prev=NULL;
        ListNode*curr=slow->next;
        slow->next=NULL;
        ListNode*nextnode=NULL;
        while(curr!=NULL){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        ListNode*first=head;
        ListNode*second=prev;
        while(second){
            ListNode*firstnext=first->next;
            ListNode*secondnext=second->next;
            first->next=second;
            second->next=firstnext;
            first=firstnext;
            second=secondnext;
        }

        


        
    }
};
