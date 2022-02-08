class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
       int i, j,count=0;
        string n;
        for(i=0; i<nums.size();i++)
        {
            for(j=0; j<nums.size(); j++)
            {
                n = nums[i]+ nums[j];
                if(n==target && i!=j)
                    // cout<<i<<" "<<j<<endl;
                    count++;
            }
        }
        return count;
    }
};