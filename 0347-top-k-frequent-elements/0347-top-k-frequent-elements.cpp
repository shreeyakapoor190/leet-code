class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
         priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > p1;
        vector<int> res;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto j:m){
            p1.push({j.second,j.first});
            if(p1.size()>k)
            p1.pop();
        }
        while(p1.size()!=0){
            res.push_back(p1.top().second);
            p1.pop();
        }
        return res;
    }
};