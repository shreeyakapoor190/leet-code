/*
 * @lc app=leetcode id=1313 lang=cpp
 *
 * [1313] Decompress Run-Length Encoded List
 */

// @lc code=start
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        int i, j, c = 1;
        vector<int> result;
        for (i = 0; i < nums.size(); i += 2)
        {
            for (j = 0; j < nums[i]; j++)
            {
                result.push_back(nums[c]);
            }
            c += 2;
        }
        return result;
    }
};
// @lc code=end
