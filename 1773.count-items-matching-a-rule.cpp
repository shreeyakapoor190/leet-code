/*
 * @lc app=leetcode id=1773 lang=cpp
 *
 * [1773] Count Items Matching a Rule
 */

// @lc code=start
class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int l = items.size(), i, j, count = 0;
        for (i = 0; i < l; i++)
        {
            if (ruleKey == "type" && items[i][0] == ruleValue)
            {
                count++;
            }
            else if (ruleKey == "color" && items[i][1] == ruleValue)
            {
                count++;
            }
            else if (ruleKey == "name" && items[i][2] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};
// @lc code=end
