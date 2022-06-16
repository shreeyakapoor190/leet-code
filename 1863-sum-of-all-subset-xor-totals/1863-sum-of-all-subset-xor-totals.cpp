class Solution {
public:
    int sum=0;
    void solve(vector<int> &nums, int n, int i, int curr_xor){
        if(i==n){
            sum += curr_xor;    //reached null of one subset 
            return;
        }
        //2 cases possible
        solve(nums, n, i+1, curr_xor^nums[i]);  //including XOR of nums[i]
        solve(nums, n, i+1, curr_xor);          //excluding XOR of nums[i]
    }
    
    int subsetXORSum(vector<int>& nums) {
        
        int n = nums.size();
        int curr_xor = 0;
        solve(nums, n, 0, curr_xor);
        
        return sum;
    }
};