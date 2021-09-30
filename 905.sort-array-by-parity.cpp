/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> even;
        vector<int> odd;
        int l = nums.size(), i;
        for (i = 0; i < l; i++)
        {
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        int o = odd.size();
        for (i = 0; i < o; i++)
        {
            even.push_back(odd[i]);
        }
        return even;
    }
};
// @lc code=end
