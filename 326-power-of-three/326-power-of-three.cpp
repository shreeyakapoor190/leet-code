class Solution {
public:
    bool isPowerOfThree(int n) {
      long res=1,i=1;
        while(res<=n)
        {
            if(res==n)
                return true;
            res= pow(3,i);
            i++;
        }
        return false;  
    }
};