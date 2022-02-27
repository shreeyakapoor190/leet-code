class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(auto k:words){
            if(k.find(pref)==0){
                c++;
            }
        }
        return c;
    }
};