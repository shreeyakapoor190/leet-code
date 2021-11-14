class Solution {
public:
    int xorOperation(int n, int start) {
      int i,res=0,nums;
       for (i = 0; i < n; i++)
        {
            nums=start + i * 2;
            res^=nums;
        }
        return res;
    }
};