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
     void inorder(TreeNode *root, vector<int> &arr)
    {
        if(!root)
            return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    
    TreeNode* increasingBST(TreeNode* root) 
    {
        vector<int> arr;
        inorder(root, arr);
        TreeNode* res=new TreeNode(arr[0]);
        TreeNode* r=res;
        // if(arr.size() ==0)
        //     return r->right;
        
         int i;
            for(i=1;i<arr.size();i++)
            {
                res->right = new TreeNode(arr[i]);
                res=res->right;
            }
            return r;
    }
   
};