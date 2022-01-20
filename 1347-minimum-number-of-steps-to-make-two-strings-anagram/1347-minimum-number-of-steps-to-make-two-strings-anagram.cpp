class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        unordered_map<char,bool> flag;
        int i,count=0,j;
        for(i=0;i<s.length();i++)
        {
            smap[s[i]]++;
        }
        for(i=0;i<t.length();i++)
        {
            tmap[t[i]]++;
        }
        for(i=0;i<s.length();i++)
        {
            if(smap[s[i]]>tmap[s[i]] && flag[s[i]]==false)
            {
                count+=smap[s[i]]-tmap[s[i]];
                flag[s[i]]=true;
        }}
        return count;
    }
};