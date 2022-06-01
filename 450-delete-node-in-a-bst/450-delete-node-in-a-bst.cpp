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
    TreeNode *findMin(TreeNode *root)
    {
        while(root->left)
        {
            root= root->left;
        }
        cout<<root->val;
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(!root)
            return NULL;
        else if(root->val > key)
            root->left= deleteNode(root->left, key);
        else if(root->val <key)
            root->right= deleteNode(root->right, key);
        else    //when root==key
        {
            //no child
            if(!root->left && !root->right)
            {
                delete root;
                root= NULL;
            }
            //single child
            else if(!root->left && root->right)
            {
                TreeNode *temp= root;
                root= root->right;
                delete temp;
            }
            else if(root->left && !root->right)
            {
                TreeNode *temp= root;
                root= root->left;
                delete temp;
            }
            //2 children
            else
            {
                TreeNode *temp= findMin(root->right);
                root->val = temp->val;
                root->right= deleteNode(root->right, temp->val);
            }
        }
        return root;
    }
};