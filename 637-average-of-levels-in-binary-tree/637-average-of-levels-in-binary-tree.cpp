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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *> q;
        double sum=0.0, count=0.0;
        vector<double> avg;
        if(root==NULL)
            return avg;
        q.push(root);
        q.push(NULL);
        while(q.size()>1)
        {
            TreeNode *curr =q.front();
            q.pop();
            if(curr==NULL)
            {
                q.push(NULL);
                avg.push_back(sum/count);
                sum= 0.0;
                count=0.0;
                continue;
            }
            sum+= curr->val;
            count++;
            
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        avg.push_back(sum/count);
        return avg;
    }
};