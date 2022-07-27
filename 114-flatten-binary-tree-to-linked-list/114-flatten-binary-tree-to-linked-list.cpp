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
    vector<int> r;
    void flatten(TreeNode* root) {
        if(!root)
            return;
        r.push_back(root->val);
        flatten(root->left);
        flatten(root->right);
        
        solve(root, r);
        
    }
    void solve(TreeNode *temp, vector<int> &r)
    {
        for(int i=1;i<r.size(); i++)
        {
            // cout<<r[i];
            temp->right= new TreeNode(r[i]);
            temp->left=NULL;
            temp= temp->right;
        }
        return;
    }
};