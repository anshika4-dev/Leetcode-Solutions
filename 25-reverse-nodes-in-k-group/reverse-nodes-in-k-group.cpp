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
    ListNode* rev(ListNode* head,int k){
        ListNode* prev=nullptr,*curr=head;
        while(k--){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=curr;
        return prev;
    }
    int len(ListNode* head){
        if(!head) return 0;
        return 1+len(head->next);
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l=len(head);
        int tem=l/k;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* temp=dummy;
        while(tem--){
            temp->next=rev(temp->next,k);
            for(int i=0;i<k;i++) temp=temp->next;
        }
        return dummy->next;
    }
};