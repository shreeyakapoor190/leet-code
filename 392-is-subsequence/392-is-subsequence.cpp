class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j, tl= t.size(), sl=s.size();
       j=0;
        for(i=0;i<tl; i++)
       {
           if(t[i]==s[j])
               j++;
        }
        return(j==sl);
      }
};