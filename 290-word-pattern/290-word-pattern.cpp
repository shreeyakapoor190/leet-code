class Solution {
public:
    bool wordPattern(string pattern, string s) {
      vector<string> w;
        unordered_map<char,string> k;
        unordered_map<string,char> kl;
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                w.push_back(word);
                word="";
            }
            else{
            word=word+s[i];
            }
        }
        w.push_back(word);
        
        if(pattern.length()!=w.size()){
            return false;
        }
        for(int i=0;i<pattern.length();i++){
            if(k.find(pattern[i])!=k.end()){
                if(k[pattern[i]]!=w[i]){
                    return false;
                }
            }
            else{
                // cout<<pattern[i]<<g[i];
                k[pattern[i]]=w[i];
            }
        }
        for(int i=0;i<pattern.length();i++){
            if(kl.find(w[i])!=kl.end()){
                if(kl[w[i]]!=pattern[i]){
                    return false;
                }
            }
            else{
               
                kl[w[i]]=pattern[i];
            }
        }
        
        return true;
    }
};