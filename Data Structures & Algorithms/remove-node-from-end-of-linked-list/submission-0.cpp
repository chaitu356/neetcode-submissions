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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*temp=head;
        int l=1;
        while(temp->next){
            temp=temp->next;
            l++;
        }
        int cnt= l-n-1;
        if(l==n){
            temp=head;
           
            head=head->next;
             delete temp;
            return head;
        }
        temp=head;

        while(cnt>0){
            temp=temp->next;
            cnt--;

        }
        ListNode*a=temp->next;
        temp->next=a->next;
        delete a;
        

       

        return head;

        

    }
};
