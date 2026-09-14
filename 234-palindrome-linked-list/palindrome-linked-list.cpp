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
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr, *curr=head;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow=head,*fast=head,*prev=head;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast) slow=slow->next;
        prev->next=reverse(slow);
        ListNode* temp=head;
        slow=prev->next;
        while(slow){
            if(slow->val!=temp->val) return false;
            slow=slow->next;
            temp=temp->next;
        }
        return true;
    }
};