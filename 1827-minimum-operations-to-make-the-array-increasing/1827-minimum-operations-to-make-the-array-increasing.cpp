class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i, inc=0;
        if(nums.size() <=1)
            return inc;
        for(i=1; i<nums.size() ;i++)
        {
            if(nums[i]>nums[i-1])
                continue;
            else if(nums[i]==nums[i-1])
            {
                inc++;
                nums[i]= nums[i]+1;
            }
            else
            {
                inc+= nums[i-1]+1-nums[i];
                nums[i]= nums[i-1]+1;
            }
               
            
        }
        //to check the last digit in array
        
        return inc;
    }
};