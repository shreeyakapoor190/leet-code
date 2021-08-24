/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> sum;
        int i, c = 0;
        for (i = 0; i < gain.size(); i++)
        {
            sum.push_back(c);
            c += gain[i];
        }
        sum.push_back(c);
        int max = 0;
        for (i = 0; i < sum.size(); i++)
        {
            if (sum[i] > max)
                max = sum[i];
        }
        return max;
    }
};
// @lc code=end
