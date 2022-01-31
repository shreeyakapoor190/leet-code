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
    bool checkValid(TreeNode* root,long long right,long long left)
    {
        if(root==NULL)
            return true;    //means we have reached leaf node after successful checking
            
        if(root->val<right&&root->val>left)   //if left node is lesser and right node is greater then only it can be a valid BST else return false from that point only where are you now 
                return checkValid(root->left,root->val,left)&&checkValid(root->right,right,root->val);  
    //update the  values of left value from we need to check and similarly for the right value also
        else
                return false;
        
    }
    bool isValidBST(TreeNode* root) {
        if(!root->left&&!root->right)    //if only singe node is there
            return true;
        return checkValid(root,LONG_MAX,LONG_MIN);
    }
};