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
        int num=0;
        ListNode* temp=head;
        while(temp){
             num++;
             temp=temp->next;
        }
        if(num==n) return head->next;
        int dist=num-n-1;
        temp=head;
        while(dist--){
            temp=temp->next;
        }
        if(temp->next!=nullptr)  temp->next=temp->next->next;
        return head;
    }
};