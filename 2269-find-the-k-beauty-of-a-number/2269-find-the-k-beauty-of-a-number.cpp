class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
          string s="";
        string m=to_string(num);
        int c=0;
        for(int i=0;i<m.length()-k+1;i++)
        {
            for(int j=i; j<i+k ; j++)
            {
                s=s+m[j];
            }
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