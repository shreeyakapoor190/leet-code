class Solution {
public:
    bool areOccurrencesEqual(string s) {
       int i;
        unordered_map<char,int> m;
        for(i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        int c = m[s[0]];
        for(i=1; i<s.length(); i++)
        {
            if(m[s[i]]!=c)
                return false;
        }
        return true;
    }
};