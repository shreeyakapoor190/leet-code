class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
      int len= nums.size();
        int i,n= len/2;
        unordered_map<int,int> m;
        for(i=0;i<len;i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second ==n)
                return x.first;
        }
        return 0;
    }
};