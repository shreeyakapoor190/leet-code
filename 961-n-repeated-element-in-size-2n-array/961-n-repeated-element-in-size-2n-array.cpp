class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
      
        int i;
        unordered_map<int,int> m;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second ==nums.size()/2)
                return x.first;
        }
        return 0;
    }
};