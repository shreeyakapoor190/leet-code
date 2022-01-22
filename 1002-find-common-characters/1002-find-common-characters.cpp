class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
//         unordered_set<char> s(words[0].begin(),words[0].end());
//         unordered_map<char,bool> flag;
//         vector<char>f;
//         string res;
//         vector<string> r;
//         int i;
//         for(i=1;i<words.size();i++)
//         {
//             // s1.insert(words[i].begin(),words[i].end());
//             for(int j=0;j<words[i].size();j++)
//                 if(s.find(words[i][j]) != s.end() && flag[words[i][j]]==false)
//                 {
//                     f.push_back(words[i][j]);
//                     flag[words[i][j]]=true;
//                 }
//             s.clear();
//             s.insert(f.begin(),f.end());
//         }
//         for(i=0;i<f.size();i++)
//         {
//             res="";
//             res=res+f[i];
//             r.push_back(res);
//         }
        
//         return r;
    vector<string> res;
        unordered_map<char,int> g;        
        for(int i=0;i<words.size();i++){
            unordered_map<char,int> p;
            if(i==0){
            for(int j=0;j<words[i].length();j++){               
                    g[words[i][j]]++;
            }
            }
            else{
                 for(int j=0;j<words[i].length();j++){               
                    p[words[i][j]]++;
            }     
            for(auto k=g.begin();k!=g.end();k++){
                if(p.find(k->first)!=p.end()){
                    if(p[k->first]<k->second){
                        k->second=p[k->first];
                    }
                }
                else{
                 
                    k->second=0;
                }        
            }
        }
        }        
        for(auto i=g.begin();i!=g.end();i++){
            if(i->second>=1){                
                while(i->second>0){
                    string m="";
                m=m+i->first;
                res.push_back(m);
                    i->second--;
                }                
            }            
        }           
        return res;
    }
    
};