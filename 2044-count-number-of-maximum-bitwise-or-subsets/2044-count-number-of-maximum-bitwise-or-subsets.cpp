class Solution {
public:
    int sum=0;
    int countMaxOrSubsets(vector<int>& nums) {
        int m=INT_MIN, count=0;
         int n = nums.size();
        int curr_xor = 0, sum=0;
        
        findMax(nums, n, 0, curr_xor, m);
        sum=0;
        countMax(nums, m, count, n, 0, curr_xor );
        return count;
    }
    void findMax( vector<int> &nums, int n, int i, int curr_xor, int &m )
    {
        if(i==n){
            m= max(m, curr_xor);
            return;
        }
        //2 cases possible
        findMax(nums, n, i+1, curr_xor|nums[i], m);  //including XOR of nums[i]
        findMax(nums, n, i+1, curr_xor, m);          //excluding XOR of nums[i]
    
    }
    void countMax(vector<int> &nums, int &m, int &count, int n, int i, int curr_xor)
    {
        if(i==n)
        {
            if(curr_xor== m)
                count++;
            return;
        }
        countMax(nums, m, count, n, i+1, curr_xor|nums[i]);
        countMax(nums, m, count, n, i+1, curr_xor);
    }
};