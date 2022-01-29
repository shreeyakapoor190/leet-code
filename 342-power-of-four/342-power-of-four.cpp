class Solution {
public:
    bool isPowerOfFour(int n) {
        long res=1,i=1;
        while(res<=n)
        {
            if(res==n)
                return true;
            res= pow(4,i);
            i++;
        }
        return false;
    }
};