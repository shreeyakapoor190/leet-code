class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> r;
        int sum=0;
        solve(candidates, target, res, r, sum, 0);
        return res;
    }
    void solve(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> r, int sum, int start)
    {
        if(sum> target)
            return;
        if(sum==target)
        {
            res.push_back(r);
            return;
        }
        for(int i=start; i<candidates.size(); i++)
        {
            sum+= candidates[i];
            r.push_back(candidates[i]);
            solve(candidates, target, res, r, sum, i);
            r.pop_back();
            sum-= candidates[i];
        }
    }
};