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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>res;
        vector<vector<int>> result;
        if(!root)
            return result;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int c=1;
        while(!q.empty())
        {
            TreeNode *temp= q.front();
            q.pop();
            if(!temp)
            {
                if(c%2==0)
                    reverse(res.begin(), res.end());
                c++;
                if(!q.empty())
                    q.push(NULL);
                result.push_back(res);
                res.clear();
            }
            else
            {
                res.push_back(temp->val);
                if(temp->left) 
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return result;
    }
};