class Solution {
public:
    bool isPowerOfTwo(int n) {
      long res=1,i=1;
        while(res<=n)
        {
            if(res==n)
                return true;
            res= pow(2,i);
            i++;
        }
        return false;
    }
};