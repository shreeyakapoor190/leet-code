class Solution {
public:
    string removeOuterParentheses(string s) {
         stack<char> st;
        string res, result;
        int l = s.size(), i, c1 = 0, c2 = 0;
        for (i = 0; i < l; i++)
        {
            st.push(s[i]);
            if (s[i] == '(')
                c1++;
            if (s[i] == ')')
                c2++;

            if (c1 == c2)
            {
                st.pop();
                while(st.size()!=1)
                {
                    res.push_back(st.top());
                    st.pop();
                }
                st.pop(); // to pop the first bracket
                c1 = 0;
                c2=0;
                reverse(res.begin(), res.end());
                result+=res;
                res="";
            }
        }
        result+=res;
        return result;
    }
};