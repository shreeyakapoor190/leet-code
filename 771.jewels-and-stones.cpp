/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int i, j, c = 0;
        int len1 = jewels.size();
        int len2 = stones.size();
        for (i = 0; i < len1; i++)
        {
            for (j = 0; j < len2; j++)
            {
                if (jewels[i] == stones[j])
                    c++;
            }
        }
        return c;
    }
};
// @lc code=end
