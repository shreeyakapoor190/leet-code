class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size(), i;
        unordered_map<int,int> m;
        for(i=0;i<l;i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second > l/2)
                return x.first;
        }
        return 0;
    }
};