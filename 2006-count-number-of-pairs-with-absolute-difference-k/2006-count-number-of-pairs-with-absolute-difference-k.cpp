class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
//         Method 1:
        // int l=nums.size(),i,j,c=0;
        // for(i=0;i<l;i++)
        // {
        //     for(j=i+1;j<l;j++)
        //     {
        //        if(abs(nums[i]-nums[j])==k)
        //            c++;
        //      }
        // }
        // return c;
        
//         method 2:
        unordered_map<int,int> m;
        int i,c=0;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            int z= x.first - k;
            // if(z<0)
            //     z=-z;
            if(m.find(z)!=m.end())
                c= c+ (x.second * m[z]);
        }
        return c;
    }
};