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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;

        int lh= height(root->left);
        int rh= height(root->right);
        int ht= lh+ rh;
        
        int ldia= diameterOfBinaryTree(root->left);
        int rdia= diameterOfBinaryTree(root->right);
        
        return max(ht, max(ldia, rdia));
    }
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
        return 1+ max(height(root->left), height(root->right));
    }
};