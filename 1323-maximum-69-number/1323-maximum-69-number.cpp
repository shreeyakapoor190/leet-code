class Solution {
public:
    int maximum69Number (int num) {
        int n=num, maxi=INT_MIN;
        string s= to_string(num);
       maxi= max(maxi, n);
        for(int i=0; i<s.length();i++)
        {
            if(s[i]=='9')
                s[i]= '6';
            else
                s[i]='9';
            n= stoi(s);
            maxi= max(maxi, n);
            //changing it back to original string
            if(s[i]=='9')
                s[i]= '6';
            else
                s[i]='9';
        }
        return maxi;
    }
};