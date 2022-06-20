class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int l=n, r=n;
        string s;
        solve(res, s, l, r);
        return res;
    }
    void solve(vector<string> &res, string s, int l, int r)
    {
        if(l==0 && r==0)
        {
            res.push_back(s);
            return;
        }
        
        if(l>0)
        {
            s.push_back('(');
            solve(res, s, l-1, r);
            s.pop_back();
        }
        if(r>l)
        {
            s.push_back(')');
            solve(res, s, l, r-1);
            s.pop_back();
        }
    }
};