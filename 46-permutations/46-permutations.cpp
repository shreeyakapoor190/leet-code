class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> r, freq;
        freq.resize(nums.size(), 0);    //resizing the freq array and initialising all its
        //elements with zero
        solve(nums, res, r, freq);
        return res;
    }
    void solve(vector<int> &nums, vector<vector<int>>&res, vector<int> r, vector<int> &freq)
    {
        if(r.size()==nums.size())
        {
            res.push_back(r);
            return;
        }
        for(int i=0 ; i<nums.size(); i++)
        {
            if(freq[i]==0)
            {
                r.push_back(nums[i]);
                freq[i]= 1;
                solve(nums, res, r, freq);
                freq[i]= 0;
                r.pop_back();
            }
        }
        return;
    }
};
