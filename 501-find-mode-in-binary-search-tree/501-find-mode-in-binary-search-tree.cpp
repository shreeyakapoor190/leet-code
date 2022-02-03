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
    unordered_map<int,int> m;
    
    
    vector<int> findMode(TreeNode* root) {
       
        // queue<TreeNode*> q;
        // q.push(root);
        //     while (q.empty() == false)
        //     {
        //         TreeNode *curr = q.front();
        //         q.pop();
        //         m[curr->val]++;
        //         if (curr->left != NULL)
        //             q.push(curr->left);
        //         if (curr->right != NULL)
        //             q.push(curr->right);
        //     }
inorder(root);       
        return find(m);
    }
    void inorder(TreeNode *root)
    {
        if(!root)
            return;
        m[root->val]++;
        inorder(root->left);
        inorder(root->right);
    }
    vector<int> find(unordered_map<int,int> m)
    {
      vector<int> result;
        int maxi=0;
        for (auto x : m)
        {
            maxi= max(maxi, x.second);
        }
        for (auto x : m)
        {
            if(x.second==maxi)
                result.push_back(x.first);
        }
        return result;
      
    }
};