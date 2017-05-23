/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int leftHeight = minDepth(root->left);
        int rightHeight = minDepth(root->right);
        if (leftHeight == 0) return rightHeight + 1;
        if (rightHeight == 0) return leftHeight + 1;
        return min(leftHeight, rightHeight) + 1;
    }
};

