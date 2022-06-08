class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered_map<int, int> m;
        // if(nums.size()<=1)
        //     return false;
        // for(int i=0; i<nums.size()-k+1 ; i++)
        // {
        //     for(int j=i+1; j< i+k+1; j++)
        //     {
        //         if(nums[i]== nums[j])
        //             return true;
        //     }
        // }
        // return false;
        unordered_map<int,int> g;
        for(int i=0;i<nums.size();i++){
            if(g.find(nums[i])==g.end()){
                g[nums[i]]=i;
            }
        }        
        for(int i=0;i<nums.size();i++){
            if(g.find(nums[i])!=g.end()&&i!=g[nums[i]]&&abs(i-g[nums[i]])<=k){
                return true;
                // break;
            }
            g[nums[i]]=i;   //updating the most recent value so that it can be compared to its                                  closest index
        }
        return false;
    }
};