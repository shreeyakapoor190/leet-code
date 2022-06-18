class Solution {
public:
   
   vector<vector<int>> gar;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> g;
        int start=0;
        int end=nums.size();
        find(nums,g,start,end);
        return gar;
    }
    
    void find(vector<int>& nums,vector<int> g,int start,int end){
        gar.push_back(g);
        for(int i=start;i<end;i++){
            g.push_back(nums[i]);
            find(nums,g,i+1,end);
            g.pop_back();
        }
        
    }
};