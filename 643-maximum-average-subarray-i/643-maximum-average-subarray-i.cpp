class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i;
        double sum=0, avg;
        for(i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        avg=sum/k;
        for(i=k;i<nums.size();i++)
        {
            sum+= nums[i]-nums[i-k];
            avg=max(avg,sum/k);
        }
        return avg;
    }
};