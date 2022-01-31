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
    
    vector<vector<int>> res;
    vector<int>r;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return res;
        if(root!=NULL)
        {  
            queue<TreeNode *> q;
        q.push(root);
            q.push(NULL);
        while(q.size()>1)
        {
            TreeNode *curr= q.front();
            q.pop();
            if(curr==NULL)
            {
                res.push_back(r);
                q.push(NULL);
                r.clear();
                continue;
            }
            r.push_back(curr->val);
            
             if (curr->left != NULL)
            q.push(curr->left);
             if (curr->right != NULL)
            q.push(curr->right);
        }
        }
        res.push_back(r);
        return res;
    }
};