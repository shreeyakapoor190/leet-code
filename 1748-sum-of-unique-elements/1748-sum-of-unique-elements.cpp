class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        int i,sum=0;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
                sum += x.first;
        }
        return sum;
    }
};