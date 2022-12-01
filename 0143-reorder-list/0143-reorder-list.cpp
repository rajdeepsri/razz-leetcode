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
        //handling edge cases
        if(head==NULL || head->next==NULL || head->next->next==NULL) return;
        
        //locating middle node
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //reversing the other half
        ListNode* prev=slow;
        ListNode* curr=slow->next;
        ListNode* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        //breaking into two
        slow->next=NULL;
        
        //joining both
        slow=head;
        ListNode* temp1=NULL;
        ListNode* temp2=NULL;
        while(slow!=NULL){
            temp1=slow->next;
            temp2=prev->next;
            slow->next=prev;
            prev->next=temp1;
            slow=temp1;
            prev=temp2;
        }
    }
};













