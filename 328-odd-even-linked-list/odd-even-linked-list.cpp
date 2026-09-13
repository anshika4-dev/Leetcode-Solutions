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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd=head,*even=head->next, *temp1=odd,*temp2=even,*curr=head->next->next;
        while(curr){
            temp1->next=curr;
            curr=curr->next;
            temp1=temp1->next;
            if(!curr) break;
            temp2->next=curr;
            curr=curr->next;
            temp2=temp2->next;
        }
        temp2->next=nullptr;
        temp1->next=even;
        return odd;
    }
};