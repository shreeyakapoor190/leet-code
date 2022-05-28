class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i, l=nums.size();
        unordered_map<int,int> m;
        for(i=0;i<l;i++)
        {
            m[nums[i]]++;
        }
        for(i=0;i<=l;i++)
        {
           if(m.find(i)==m.end())
               return i;
        }
        return 0;
    }
};