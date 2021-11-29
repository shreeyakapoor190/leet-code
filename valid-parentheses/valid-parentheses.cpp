class Solution {
public:
    bool isValid(string s) {
        int l = s.size(), i;
        stack<int> st;
        for (i = 0; i < l; i++)
        {
            if (st.empty())
                st.push(s[i]);
            else
            {
                if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '['))
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        return st.empty();
    }
};