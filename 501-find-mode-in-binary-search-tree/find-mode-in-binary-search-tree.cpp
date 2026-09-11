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
    unordered_map<int,int>m;
    int mode=INT_MIN;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        m[root->val]++;
        mode=max(mode,m[root->val]);
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int>res;
        for(auto &p:m) if(p.second==mode) res.push_back(p.first);
        return res;
    }
};