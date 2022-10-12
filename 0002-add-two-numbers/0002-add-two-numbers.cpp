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
void InsertAtTail(ListNode* &tail, int sum){
    ListNode* temp = new ListNode(sum);
    tail->next=temp;
    tail=temp;
}
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail=dummy;
        ListNode* prev = NULL;
        
        int sum=0;
        int carry=0;
        
        while(curr1!=NULL && curr2!=NULL){
            sum=curr1->val + curr2->val;
            if(sum+carry<10){
                InsertAtTail(tail, (sum+carry));
                carry=0;
            }
            else{
                InsertAtTail(tail, (sum+carry)%10);
                carry=1;
            }
            prev=curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        while(curr1!=NULL){
            sum=curr1->val;
            if(sum+carry<10){
                InsertAtTail(tail, (sum+carry));
                carry=0;
            }
            else{
                InsertAtTail(tail, (sum+carry)%10);
                carry=1;
            }
            prev=curr1;
            curr1=curr1->next;
        }
        
        while(curr2!=NULL){
            sum=curr2->val;
            if(sum+carry<10){
                InsertAtTail(tail, (sum+carry));
                carry=0;
            }
            else{
                InsertAtTail(tail, (sum+carry)%10);
                carry=1;
            }
            prev=curr2;
            curr2=curr2->next;
        }
        
        if(carry!=0){
            InsertAtTail(tail,carry);
        }
        
        return dummy->next;
    }
};


