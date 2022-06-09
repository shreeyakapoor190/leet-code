class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j=0, k=numbers.size()-1, i;
        vector<int>res;
        for(i=0;i<numbers.size(); i++)
        {
            int sum = numbers[j]+numbers[k];
            if(sum == target)
            {
                res.push_back(j+1);
                res.push_back(k+1);
                return res;
            }
            else if(sum >target)
                k--;
            else if(sum< target)
                j++;
        }
        return res;
    }
};