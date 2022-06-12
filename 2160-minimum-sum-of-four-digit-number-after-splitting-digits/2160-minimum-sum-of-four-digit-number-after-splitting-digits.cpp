class Solution {
public:
    int minimumSum(int num) {
        vector<int> d;
        while(num>0)
        {
            d.push_back(num%10);
            num/=10;
        }
        sort(d.begin(), d.end());
        int num1= d[0]*10 + d[2];
        int num2= d[1]*10+ d[3];
        return num1+num2;
    }
};