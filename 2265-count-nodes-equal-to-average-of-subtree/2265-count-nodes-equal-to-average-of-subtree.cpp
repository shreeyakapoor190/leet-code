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
    int c=0;
    int averageOfSubtree(TreeNode* root) {
        if(!root)
            return 0;
        int sum=0, count=0;
        int avg= average(root, sum, count);
        // cout<<avg<<"- "<<root->val<<"   ";
        if(avg==root->val)
        {
            // cout<<avg;
            c++;
        }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return c;
    }
    
    
    int average(TreeNode *root,int &sum,int &count)
    {
        if(!root)
            return sum;
        sum+= root->val;
        count++;
        average(root->left, sum, count);
        average(root->right, sum, count);
        return sum/count;
    }
};