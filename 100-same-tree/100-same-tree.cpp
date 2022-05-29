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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool k, l, r;
        if(!p && !q)
            return true;
        else if(p && !q)
            return false;
        else if(!p && q)
            return false;
        
        else
        {
            k= true;
            if(p->val != q->val)
            {
                cout<<p->val<<" "<<q->val;
                k= false;
            }
            l= isSameTree(p->left, q->left);
            r= isSameTree(p->right, q->right);
            
            return k&&l&&r;
        }
        
    }
};