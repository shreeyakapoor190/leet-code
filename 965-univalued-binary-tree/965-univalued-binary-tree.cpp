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
    vector<int> arr;
    int c=0;
    bool isUnivalTree(TreeNode* root) {
        // arr[0]=root;
        if(root!=NULL)
        {
        if(root->left!=NULL && root->val!= root->left->val)
            c=1;
        if(root->right!=NULL && root->val!=root->right->val)
                c=1;
        isUnivalTree(root->left);
        isUnivalTree(root->right);
        }
        return(c==0);
    }
};