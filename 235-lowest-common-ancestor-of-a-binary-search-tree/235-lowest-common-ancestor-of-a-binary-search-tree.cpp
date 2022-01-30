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
    TreeNode *res;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int mini, maxi;
        mini= min(p->val, q->val);
        maxi= max(p->val, q->val);
        if(maxi < root->val && mini < root->val)
            lowestCommonAncestor(root->left, p, q);
        else if(maxi > root->val && mini > root->val)
            lowestCommonAncestor(root->right, p, q);
        else if(root->val>mini && root->val<maxi)
            res=root;
        else if(root->val == mini || root->val == maxi)
            res= root;
        return res;
    }
    
//     TreeNode* find(TreeNode * root, int maxi, int mini)
//     {
        
//     }
};