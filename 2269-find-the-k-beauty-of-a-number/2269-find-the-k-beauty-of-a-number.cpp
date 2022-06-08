class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
          string s="";
        string m=to_string(num);
        int c=0;
        for(int i=0;i<m.length()-k+1;i++)
        {
             s=m.substr(i,k);       //creating substring from given string
            int n=stoi(s);      //convert string to integer
            if(n!=0&&num%n==0)
            {
                c++;
            }
            s="";
        }
        return c;
    }
};