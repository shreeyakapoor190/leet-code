class Solution {
public:
    int s= 0;
        int sum(int num)
        {
            s=0;
           while(num>0)
                {
                    s+= num%10;
                    num/= 10;
                }
            return s;
        }
    int addDigits(int num) {
        if(num < 10)
            return num;
        s= sum(num);
        while(s > 9)
        {
            s = sum(s);
        }
        return s;
    }
};

