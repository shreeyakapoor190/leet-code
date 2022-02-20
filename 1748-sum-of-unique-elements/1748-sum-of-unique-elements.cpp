class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        //  int sum = 0, l = nums.size(), i, j, c,d;
        // vector<int> rep;
        // for (i = 0; i < l; i++)
        // {
        //     c = 0;
        //     sum += nums[i];
        //     for (j = i + 1; j <= l - 1; j++)
        //     {
        //         d=0;
        //         if (nums[i] == nums[j] && c == 0 && d==0)
        //         {
        //             c++;d++;
        //             rep.push_back(nums[i]);
        //             rep.push_back(nums[j]);
        //         }
        //         //  else if (nums[i] == nums[j] && c> 0)
        //         // {
        //         //     rep.push_back(nums[j]);
        //         //     c++;
        //         // }
        //     }
        // }
        // int len = rep.size();
        // for (i = 0; i < len; i++)
        // {
        //     sum -= rep[i];
        // }
        // return sum;
        unordered_map<int,int> m;
        int i,sum=0;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
                sum += x.first;
        }
        return sum;
    }
};