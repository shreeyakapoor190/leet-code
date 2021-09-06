/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        int i = 0;
        char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        string result;
        while (columnNumber > 0)
        {
            i = columnNumber % 26;
            columnNumber /= 26;
            if (i == 0)
            {
                result += 'Z';
                columnNumber--;
            }
            else
            {
                result += alpha[i - 1];
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end
