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
    int getDecimalValue(ListNode* head) {
        vector<int>nums;
        ListNode* temp=head;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,res=0;
        for(int j=nums.size()-1;j>=0;j--) res+=(pow(2,i++)*nums[j]);
        return res;
    }
};