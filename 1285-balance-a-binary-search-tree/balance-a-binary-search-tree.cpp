class Solution {
public:
    vector<int> inorder;

    void getInorder(TreeNode* root) {
        if (!root) return;
        getInorder(root->left);
        inorder.push_back(root->val);
        getInorder(root->right);
    }

    TreeNode* buildBalanced(int l, int r) {
        if (l > r) return nullptr;

        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(inorder[mid]);

        root->left = buildBalanced(l, mid - 1);
        root->right = buildBalanced(mid + 1, r);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        getInorder(root);                    // Step 1: store sorted values
        return buildBalanced(0, inorder.size() - 1); // Step 2: build balanced BST
    }
};
