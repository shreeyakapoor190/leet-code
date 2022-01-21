class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char>s1,t1;
        int i;
        vector<char> w1,w2;
        for(i=0;i<s.length();i++)
        {
            if(s1.empty() && s[i]=='#')
                continue;
            if(s[i]=='#')
                s1.pop();
            else
                s1.push(s[i]);
        }
        for(i=0;i<t.length();i++)
        {
            if(t1.empty() && t[i]=='#')
                continue;
            if(t[i]=='#')
                t1.pop();
            else
                t1.push(t[i]);
        }
        while(s1.size()!=0)
        {
            w1.push_back(s1.top());
            s1.pop();
        }
        while(t1.size()!=0)
        {
            w2.push_back(t1.top());
            t1.pop();
        }
        return (w1==w2);
    }
};