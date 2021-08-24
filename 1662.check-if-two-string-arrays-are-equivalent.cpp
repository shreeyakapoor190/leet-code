
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int i, l1 = word1.size(), l2 = word2.size();
        string s1, s2;
        for (i = 0; i < l1; i++)
        {
            s1.append(word1[i]);
        }
        for (i = 0; i < l2; i++)
        {
            s2.append(word2[i]);
        }
        if (s1 == s2)
            return true;
        else
            return false;
        }
};
// @lc code=end
