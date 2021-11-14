class Solution {
public:
    int subtractProductAndSum(int n) {
       int c = n, d, sum = 0, pdt = 1;
        while (c > 0)
        {
            d = c % 10;
            c = c / 10;
            sum += d;
            pdt *= d;
        }
        return pdt-sum; 
    }
};