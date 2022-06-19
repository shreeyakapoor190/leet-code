class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>r;
        map<vector<int> , int> m;
        int start=0, end= nums.size();
        sort(nums.begin(),nums.end());      //sort the array so that duplicates are adjacent
        solve(nums, res, r, m, start, end);
        return res;
    }
    void solve(vector<int> nums, vector<vector<int>> &res, vector<int> r, map<vector<int>, int> &m, int start, int end)
    {
        if(m.find(r)==m.end())
        {
            res.push_back(r);
            m[r]++;
        }
            for(int i=start; i<end; i++)
        {
            r.push_back(nums[i]);
            solve(nums, res, r, m, i+1, end);
            r.pop_back();
        }
    }
};