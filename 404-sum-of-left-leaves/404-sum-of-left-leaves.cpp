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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum= 0;
        sum= sum1(root,sum);
        return sum;
    }
    int sum1(TreeNode *root, int &sum)
    {
        if(root)
        {
            if(root->left && !root->left->left && !root->left->right)
                sum+= root->left->val;
        sum1(root->left, sum);
        sum1(root->right, sum);
        }
        
        return sum;
    }
};