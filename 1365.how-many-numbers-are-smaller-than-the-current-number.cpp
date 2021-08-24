/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {

        int i, j, c;
        vector<int> result;
        for (i = 0; i < nums.size(); i++)
        {
            c = 0;
            for (j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j] && j != i)
                    c++;
            }
            result.push_back(c);
        }
        return result;
    }
};
// @lc code=end
