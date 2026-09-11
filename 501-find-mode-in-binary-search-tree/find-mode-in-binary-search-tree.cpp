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
    int mode=-1;
    vector<int>ans;
    void inorder(TreeNode* root,int &prev,int &freq){
        if(!root) return;
        inorder(root->left,prev,freq);
        if(root->val==prev) freq++;
        else{
            prev=root->val;
            freq=1;
        }
        if(freq>mode){
            ans.clear();
            ans.push_back(prev);
            mode=freq;
        }else if(freq==mode) ans.push_back(prev);
        inorder(root->right,prev,freq);
    }

    vector<int> findMode(TreeNode* root) {
        int prev=-1e9,freq=0;
        inorder(root,prev,freq);
        return ans;
    }
};