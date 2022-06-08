class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,  int> m;
        for(int i=0; i<3; i++)
        {
            m[s[i]]++;
        }
        int c=0, flag;
        for(int i=3; i<s.length(); i++)
        {
            flag = 0;
            for(auto x:m)
            {
                if(x.second>1)
                {
                    flag= 1;
                }
            }
            if(flag==0)
                c++;
            m[s[i]]++;
            m[s[i-3]]--;
        }
        flag= 0;
        for(auto x:m)
            {
                if(x.second>1)
                    flag= 1;
            }
        if(flag==0)
                c++;
        return c;
    }
};