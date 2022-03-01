class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i, j;
        string r;
        vector<string> result;
        for(i=0;i<nums.size();i++)
        {
            r="";
            j=i;
            while(j+1 < nums.size() && nums[j]+1 == nums[j+1] )
            {
                j++;
            }
            if(j>i){
                r+= to_string(nums[i]) + "->" + to_string(nums[j]);
            }
            else{
                r+= to_string(nums[i]);
            }
            result.push_back(r);
            i=j;
           
        }
        return result;
    }
};