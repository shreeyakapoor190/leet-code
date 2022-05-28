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
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        
        int lh= height(root->left);
        int rh= height(root->right);
        
        bool k= true;
        if(abs(lh-rh)>1)
        {
            k= false;
        }
        bool l= isBalanced(root->left);
        bool r= isBalanced(root->right);
        
        return k&&l&&r;
    }
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
        return 1+max(height(root->left), height(root->right));
    }
};