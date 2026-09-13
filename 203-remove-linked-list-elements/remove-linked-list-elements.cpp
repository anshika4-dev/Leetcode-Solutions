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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy,*temp2=head;
        while(temp2){
            if(temp2->val==val) temp2=temp2->next;
            else {
                temp->next=temp2;
                temp=temp->next;
                temp2=temp2->next;
            }
        }
        temp->next=nullptr;
        return dummy->next;
    }
};