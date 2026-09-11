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
    void inorder(TreeNode* root, vector<int> &temp){
        if(!root) return;
        inorder(root->left,temp);
        temp.push_back(root->val);
        inorder(root->right,temp);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2,res;
        inorder(root1,v1);
        inorder(root2,v2);
        int i=0,j=0,m=v1.size(),n=v2.size();
        while(i<m && j<n){
            if(v1[i]<v2[j]) res.push_back(v1[i++]);
            else res.push_back(v2[j++]);
        }
        while(i<m) res.push_back(v1[i++]);
        while(j<n) res.push_back(v2[j++]);
        return res;
    }
};