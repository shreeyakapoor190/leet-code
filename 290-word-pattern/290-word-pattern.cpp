class Solution {
public:
    bool wordPattern(string pattern, string s) {
      vector<string> g;
        unordered_map<char,string> k;
        unordered_map<string,char> kl;
        string gar="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                g.push_back(gar);
                gar="";
            }
            else{
            gar=gar+s[i];
            }
        }
        g.push_back(gar);
        
        if(pattern.length()!=g.size()){
            return false;
        }
        for(int i=0;i<pattern.length();i++){
            if(k.find(pattern[i])!=k.end()){
                if(k[pattern[i]]!=g[i]){
                    return false;
                }
            }
            else{
                // cout<<pattern[i]<<g[i];
                k[pattern[i]]=g[i];
            }
        }
        for(int i=0;i<pattern.length();i++){
            if(kl.find(g[i])!=kl.end()){
                if(kl[g[i]]!=pattern[i]){
                    return false;
                }
            }
            else{
               
                kl[g[i]]=pattern[i];
            }
        }
        
        return true;
    }
};