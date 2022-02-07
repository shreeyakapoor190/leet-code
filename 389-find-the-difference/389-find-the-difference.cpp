class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> s1, t1;
        int i;
        for(i=0; i<s.length(); i++)
        {
            s1[s[i]]++;
        }
        for(i=0; i<t.length(); i++)
        {
            t1[t[i]]++;
        }
        for(i=0; i<s.length(); i++)
        {
            t1[s[i]]--;
            if(t1[s[i]]==0)         //removing keys whose value is now zero
                t1.erase(s[i]);
        }
        for(auto x:t1)
            return x.first;
        return 'a';
    }
};