class Solution {
public:
    bool checkIfPangram(string sentence) {
      unordered_map <char,int>m;
      int i;
        for(i=0;i<sentence.length();i++)
        {
            m[sentence[i]]++;
        }
        for(i=97;i<=122;i++)
        {
            if(m[char(i)]==0)
                return false;
        }
                 return true;
    }
};