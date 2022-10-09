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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr || head->next==nullptr) return head;
        int k = right - left;
        if(k==0) return head;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* forward = nullptr;
        
        //reaching left
        int count=0;
        while(count<left-1){
            forward=curr->next;
            prev=curr;
            curr=forward;
            count++;
        }
        
        //storing the left pointer to attach later
        ListNode* leftNode = prev;
        count=0;
        
        //reversing k+1 nodes
        while(count<k+1){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(leftNode!=nullptr){
            leftNode->next->next = curr;
            leftNode->next=prev;
        }
        else{
            head->next=curr;
        }
        if(left!=1) return head;
        return prev;
    }
};