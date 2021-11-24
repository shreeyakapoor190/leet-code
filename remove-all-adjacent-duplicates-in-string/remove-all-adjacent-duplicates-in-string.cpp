class Solution
{
public:
    string removeDuplicates(string s)
    {

        stack<char> st;
        int l = s.size(), i = 0, top = -1;
        st.push(s[0]);
        string res;
        for (i = 1; i < l; i++)
        {
            if(st.empty())
                st.push(s[i]);
            else{
            if (st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            }
        }
        while (!st.empty())
        {
            res+= st.top();
            st.pop();
        }
    reverse(res.begin(),res.end());
        return res;
    }
};