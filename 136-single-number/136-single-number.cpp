class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for (i = 0; i < nums.size(); i++)
        {
            if (map[nums[i]] == 1)
                return nums[i];
        }
       return 0; 
    }
};