class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> arr, r;
        vector<vector<int>> res;
        for(int i=0; i<n; i++)
        {
            arr.push_back(i+1);
        }
        solve(arr, k, r, res, 0, 0);
        return res;
    }
    void solve(vector<int> arr, int k, vector<int> r, vector<vector<int>> &res, int count, int start)
    {
        if(count>k)
            return;
        if(count==k)
        {
            res.push_back(r);
            return;
        }
        for(int i= start; i<arr.size(); i++)
        {
           count++;
            r.push_back(arr[i]);
            solve(arr, k, r, res, count, i+1);
            count--;
            r.pop_back();
            
        }
    }
};