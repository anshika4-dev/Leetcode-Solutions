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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int a=-1, b=-1;
        if(root->left) a=1+minDepth(root->left);
        if(root->right) b=1+minDepth(root->right);
        if(a==-1 && b==-1) return 1;
        if(a==-1) return b;
        return b==-1?a:min(a,b); 
    }
};