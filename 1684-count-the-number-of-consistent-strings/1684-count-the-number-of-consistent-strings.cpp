class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      int i,j,count=0,flag;
      unordered_set<char> m;
        m.insert(allowed.begin(),allowed.end());
        for(i=0;i<words.size();i++)
        {
            flag=0;
            for(j=0;j<words[i].size();j++)
            {
            if(m.find(words[i][j])==m.end())
            {
                flag=1;
                break;
            }
            }
            if(flag==0)
                count++;
        }
        return count;
    }
};