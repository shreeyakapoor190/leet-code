class Solution {
public:
    string reverseWords(string s) {
         
        int l = s.size(), i, j, start = 0, f;
        string res;
        for (i = 0; i < l; i++)
        {
            if (s[i] == ' ')
            {
                f = i;
                for (j = f - 1; j >= start; j--)
                {
                    res += s[j];
                }
                res += ' ';
                start = i + 1;
            }
        }
        for (j = l - 1; j >= start; j--)
        {
            res += s[j];
        }
        return res;
    }
};