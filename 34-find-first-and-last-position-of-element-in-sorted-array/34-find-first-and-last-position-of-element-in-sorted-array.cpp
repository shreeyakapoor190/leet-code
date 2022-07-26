class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int c=0;
        vector<int>res;
        res.push_back(-1);
        res.push_back(-1);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && c==0)
            {
                res[0]=i;
                c=1;
            }
            if(nums[i]==target && c==1)
            {
                res[1]=i;
            }
        }
        return res;
    }
};