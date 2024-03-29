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
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return Symmetry(root->left, root->right);
    }
    bool Symmetry(TreeNode *l,TreeNode *r)
    {
        if(!l || !r)
            return (l==r);
        if(l->val == r->val && Symmetry(l->left,r->right) && Symmetry(l->right, r->left))
            return true;
        return false;
        
    }
};