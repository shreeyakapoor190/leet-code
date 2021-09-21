/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans;
        int l = nums.size(), i;
        for (i = 0; i < l; i++)
        {
            ans.push_back(nums[i]);
        }
        for (i = 0; i < l; i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
// @lc code=end
