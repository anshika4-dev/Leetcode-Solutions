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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;
        ListNode* temp=head;
        dummy->next=head;
        while(temp){
            int val=temp->val;
            if(temp->next && temp->next->val==val){
                while(temp && temp->val==val) temp=temp->next;
                prev->next=temp;
            }else{
                temp=temp->next;
                prev=prev->next;
            }
        }
        return dummy->next;
    }
};