/*
 * @lc app=leetcode id=1389 lang=cpp
 *
 * [1389] Create Target Array in the Given Order
 */

// @lc code=start
class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int i;
        vector<int> target;
        for (i = 0; i < index.size(); i++)
        {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};
// @lc code=end
