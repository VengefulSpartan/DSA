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
        //edgeCases=> Decapitation
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* fast=head;
        //iterate n places first
        for(int i=0;i<n-1;i++){
            fast=fast->next;
        }
        ListNode* slow=dummy;
        while(fast->next!=nullptr){
            fast=fast->next;
            slow=slow->next;
        };
        slow->next=slow->next->next;
        head=dummy->next;
        return head;


    }
};