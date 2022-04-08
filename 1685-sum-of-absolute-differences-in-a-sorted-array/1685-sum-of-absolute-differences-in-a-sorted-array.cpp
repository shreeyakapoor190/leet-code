class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> left,right;
        int i,s=0;
       left.push_back(0);
        for(i=1;i<nums.size();i++)
        {
            s= nums[i]-nums[i-1];
            left.push_back(abs(s)*i+left[i-1]);
        }
        reverse(nums.begin(), nums.end());
        right.push_back(0);
        for(i=1;i<nums.size();i++)
        {
            s= nums[i]-nums[i-1];
            right.push_back(abs(s)*i+ right[i-1]);
        }
        int j= nums.size()-1;
        for(i=0;i<nums.size(); i++)
        {
            nums[i]= left[i]+right[j];
            j--;
        }
        return nums;
    }
};