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
private:
    bool possible(ListNode* head,int k){
        int len=0;
        while(head!=nullptr){
            head=head->next;
            len++;
        }
        if(k>len) return false;
        return true;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        if(!possible(head,k)) return head;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* forward = nullptr;
        int count=0;
        
        while(curr!=NULL && count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};