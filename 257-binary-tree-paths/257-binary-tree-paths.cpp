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
    vector<string> res;
    vector<int> r;  
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)
            return res;
        r.push_back(root->val);
        binaryTreePaths(root->left);
        binaryTreePaths(root->right);
        
        if(!root->left && !root->right)
        {
            string vec="";
            int i;
            for( i=0;i< r.size()-1; i++)
            {
                vec+= to_string(r[i]) + "->";                
            }
            vec+= to_string(r[i]);
            res.push_back(vec);
            
        }
        r.pop_back();
        return res;
    }
};