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
        int size=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            size++; 
            temp=temp->next;
        }
        int skip=size-n-1;
        if(size<n) return head;
        if(size==n) return head->next;
        ListNode* f=head;
        while(skip--){
            f=f->next;
        }
        f->next=f->next->next;
        return head;
    }
};