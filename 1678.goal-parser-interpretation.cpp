/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */

// @lc code=start
class Solution
{
public:
    string interpret(string command)
    {

        int l = command.size(), i;
        string res;
        for (i = 0; i < l;)
        {
            if (command[i] == 'G')
            {
                res += 'G';
                i++;
            }
            else if (command[i] == '(' && command[i + 1] == ')')
            {
                res += 'o';
                i += 2;
            }
            else
            {
                res += "al";
                i += 4;
            }
        }
        return res;
    }
};
// @lc code=end
