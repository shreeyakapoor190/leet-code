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
    
    vector<int> l;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;    
        v1 = leaf(root1);
        l.clear();
        v2 = leaf(root2);
        if(v1.size()!= v2.size())
            return false;
        int i;
        for(i= 0; i < v1.size(); i++)
        {
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
    
    vector<int> leaf(TreeNode *root)
    {
    
        if(root)
        {
            leaf(root->left);
            if(root->left == NULL && root->right == NULL)
                l.push_back(root->val);
            leaf(root->right);
        }
        return l;
    }
};