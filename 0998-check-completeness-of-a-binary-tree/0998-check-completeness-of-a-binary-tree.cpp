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
    bool isCompleteTree(TreeNode* root) {
       queue<TreeNode*> q;
       bool flag = false;

       q.push(root);
       while(!q.empty())
       {
        TreeNode* temp= q.front();
        q.pop();

        if(!temp){
            
            flag= true;
        }
        else{
            if(flag==true){
            return false;
             }
        
     q.push(temp->left);
    q.push(temp->right);
        }
       
       } 
       return true;
    }
};