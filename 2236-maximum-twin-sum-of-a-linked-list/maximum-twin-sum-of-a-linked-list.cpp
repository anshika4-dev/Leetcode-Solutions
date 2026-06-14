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
    int pairSum(ListNode* head) {
        vector<int>sum;
        ListNode* temp=head;
        while(temp){
            sum.push_back(temp->val);
            temp=temp->next;
        }
        int max_sum=0;
        for(int i=0;i<=sum.size()/2;i++){
            max_sum=max(max_sum,sum[i]+sum[sum.size()-i-1]);
        }
        return max_sum;
    }
};