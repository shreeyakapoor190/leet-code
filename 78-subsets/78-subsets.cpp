class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> r;
        vector<vector<int>> res;
        
        solve(nums, res, r, 0);
        return res;
    }
    void solve(vector<int> &nums, vector<vector<int>> &res, vector<int> &r, int i)
    {
        if(i>=nums.size())
        {
            res.push_back(r);
            return;
        }
        r.push_back(nums[i]);
        solve(nums, res, r, i+1);
        r.pop_back();
        solve(nums, res, r, i+1);
        
        return;
    }
};