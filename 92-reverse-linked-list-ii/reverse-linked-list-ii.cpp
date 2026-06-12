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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy= new ListNode(0);
        stack<ListNode*>st;
        dummy->next=head;
        ListNode* temp=dummy;

        int start=1;
        while(start<left){
            temp=temp->next;
            start++;
        }
        ListNode* last=temp->next;
        while(start<=right){
            st.push(last);
            last=last->next;
            start++;
        }
        while(!st.empty()){
            temp->next=st.top();
            temp=temp->next;
            st.pop();
        }
        temp->next=last;
        return dummy->next;
    }
};