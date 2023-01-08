/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr1=headA;
        ListNode *curr2=headB;
        
        int cnt1=0;
        int cnt2=0;
        
        while(curr1 != NULL){
            curr1=curr1->next;
            cnt1++;
        }
        while(curr2 != NULL){
            curr2=curr2->next;
            cnt2++;
        }
        
        int jumps = abs(cnt1-cnt2);
        curr1=headA;
        curr2=headB;
        if(cnt1 > cnt2) while(jumps--) curr1=curr1->next;
        else while(jumps--) curr2=curr2->next;
        
        //now dono equal distance pr khade h to intersect
        while(curr1 != NULL && curr2 != NULL){
            if(curr1==curr2) return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
};




