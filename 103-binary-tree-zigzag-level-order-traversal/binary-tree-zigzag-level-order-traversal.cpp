/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
        bool v=true;
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            while(n--){
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                temp.push_back(q.front()->val);
                q.pop();
            }
            if(!v) reverse(temp.begin(),temp.end());
            result.push_back(temp);
            v=!v;
        }
        return result;
    }
};