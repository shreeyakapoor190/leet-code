class Solution {
public:
    string shiftingLetters(string s, vector<int>& sh) {
        string g="";
        for(int i=sh.size()-2;i>=0;i--){
            sh[i]=(sh[i]+sh[i+1])%26;
        }
        for(int i=0;i<s.length();i++){
            int m=(int)s[i]-97;
            m=(m+sh[i])%26+97;
            s[i]=(char)m;
        }
        return s;
    }
};