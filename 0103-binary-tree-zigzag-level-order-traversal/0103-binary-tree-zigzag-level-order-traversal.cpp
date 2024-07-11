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
        vector<vector<int>>res;
        vector<int> level;
        queue<TreeNode*> q;
       bool rightToLeft= true;
        if(!root)
        return res;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode* temp= q.front();
           
            q.pop();
            if(temp==nullptr)
            {
                rightToLeft= !rightToLeft;
                if(rightToLeft){
                    reverse(level.begin(), level.end());
                }
                res.push_back(level);
                level.clear();
                 if (!q.empty()) {
                    q.push(nullptr);
                }
                continue;
            }
            else{
            level.push_back(temp->val);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            }
        }
        return res;
    }
};