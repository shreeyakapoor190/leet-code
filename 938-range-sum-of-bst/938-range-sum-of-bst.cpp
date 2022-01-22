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
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
       //         preorder traversal
        if (root != NULL)
        {
            if(root->val>=low && root->val<=high)
            {
                // cout<<root->val<<" ";
                sum+=root->val;
            }
            rangeSumBST(root->left,low,high);
            rangeSumBST(root->right,low,high);
        }
        return sum;
    }
};