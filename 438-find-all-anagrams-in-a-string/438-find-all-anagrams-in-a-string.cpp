class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int l= p.length(),i;
        vector<int>result;
        unordered_map<char,int> p1;
        unordered_map<char,int> c1;
        for(i=0;i<l;i++)
        {
            p1[p[i]]++;     //mapping string p
        }
        for(i=0;i<l;i++)
        {
            c1[s[i]]++;         //mapping first window
        }
       
        if(c1 == p1)            //comparing two maps
            result.push_back(0);
        
        for(i=l;i<s.size();i++)
        {
            c1[s[i-l]]--;     
           if(c1[s[i-l]] == 0) 
               c1.erase(s[i-l]);        //erasing the char whose count is 0
            c1[s[i]]++;                 //mapping all coming windows
            
            if(c1 == p1)             //comparing two maps
                result.push_back(i-l+1);
        }
        return result;
    }
};