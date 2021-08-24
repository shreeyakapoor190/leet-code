/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> child;
        int max = 0, i;
        for (i = 0; i < candies.size(); i++)
        {
            if (max < candies[i])
                max = candies[i];
        }

        for (i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies < max)
                child.push_back(false);
            else
                child.push_back(true);
        }
        return child;
    }
};
// @lc code=end
