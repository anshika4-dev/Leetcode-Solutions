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
    ListNode* reverse(ListNode* head, int swapy) {
        ListNode* prev=nullptr,*curr=head;
        while(swapy--){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=curr;
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* temp=dummy;
        for(int i=1;i<left;i++) temp=temp->next;
        temp->next=reverse(temp->next,right-left+1);
        return dummy->next;
    }
};