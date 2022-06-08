class Solution {
public:
    string longestNiceSubstring(string s) {
        set<char> g;
        for(char i:s){
            g.insert(i);
        }
        for(int i=0;i<s.length();i++){
            if(g.find(toupper(s[i]))!=g.end()&&g.find(tolower(s[i]))!=g.end()){
                continue;
            }
            else{
                string s1=longestNiceSubstring(s.substr(0,i));
                string s2=longestNiceSubstring(s.substr(i+1));
                
                if(s1.length()>=s2.length()){
                    return s1;
                }
                else{
                    return s2;
                }
            }
               
              
        }
         return s;
    }
};