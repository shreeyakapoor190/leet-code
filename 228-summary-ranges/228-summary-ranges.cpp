class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i, j;
        string r;
        vector<string> result;
        for(i=0;i<nums.size();i++)
        {
           
            j=i;
            while(j+1 < nums.size() && nums[j]+1 == nums[j+1] )
            {
                j++;
                // c++;
            }
            if(j>i){
               
                // cout<<nums[i]<<" "<<nums[j]<<" ";
                
                r+= to_string(nums[i]) + "->" + to_string(nums[j]);
                 
            }
            else{
                // cout<<nums[i]<<" ";
                r+= to_string(nums[i]);
                // result.push_back());
            }
            result.push_back(r);
            i=j;
             r="";
        }
        return result;
    }
};