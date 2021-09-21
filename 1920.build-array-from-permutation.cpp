/*
 * @lc app=leetcode id=1920 lang=cpp
 *
 * [1920] Build Array from Permutation
 */

// @lc code=start
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int l = nums.size(), i;
        vector<int> ans;
        for (i = 0; i < l; i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
// @lc code=end
