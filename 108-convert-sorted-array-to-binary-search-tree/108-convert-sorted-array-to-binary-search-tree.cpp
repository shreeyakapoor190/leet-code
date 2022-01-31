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
   TreeNode* sortedArrayToBST(vector<int>& nums) 
   {
        int start=0;
        int end=nums.size();
        // m=new TreeNode(nums[(start+end)/2]);
        TreeNode*k=find(nums,start,end);
        return k;
    }
    TreeNode* find(vector<int>& nums,int start,int end)
    {
        if(start>=end){
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode* m=new TreeNode(nums[mid]);
        m->left=find(nums,start,(start+end)/2);
        m->right=find(nums,((start+end)/2)+1,end);
        return m;
     }    
};