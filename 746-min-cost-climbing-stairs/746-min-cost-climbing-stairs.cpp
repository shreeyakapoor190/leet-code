class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        return solve(cost, n);
     
    }
    int solve(vector<int> &cost, int n)
    {
        vector<int>dp;
        //in this dp array we store the min to reach each stair from 0 to n
        dp.push_back(cost[0]);
        dp.push_back(cost[1]);
        for(int i=2; i<n; i++)
        {
            dp.push_back(cost[i] + min(dp[i-1], dp[i-2]));
        }
        return min(dp[n-1], dp[n-2]);
    }
};
