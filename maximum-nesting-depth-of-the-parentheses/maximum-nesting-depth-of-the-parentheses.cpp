class Solution {
public:
    int maxDepth(string s) {
        int len = s.size(), i, c = 0, m = 0;
        for (i = 0; i < len; i++)
        {
            m = max(m, c);
            if (s[i] == '(')
                c++;
            if (s[i] == ')')
                c--;
        }
        return m;
    }
};