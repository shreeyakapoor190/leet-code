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
    int sum= 0;
    int sumRootToLeaf(TreeNode* root) {
        if(!root)
            return 0;
        else
        {
            r.push_back(root->val);
            sumRootToLeaf(root->left);
            sumRootToLeaf(root->right);
            
            if(!root->left && !root->right)
            {
                int c=0, dec=0;
                for(int i=r.size()-1; i>=0; i--)
                {
                    dec+= r[i]* pow(2,c);
                    c++;
                }
                cout<<dec<<" ";
                sum+= dec;
            }
            r.pop_back();
        }
        return sum;
    }
};