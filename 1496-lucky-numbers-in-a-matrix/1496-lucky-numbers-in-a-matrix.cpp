class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i, j, n=matrix.size(), mini=INT_MAX, maxi= INT_MIN;
        unordered_set<int> s1, s2;
        vector<int> res;
        for(i = 0; i < n; i++) {
            mini = INT_MAX;
            for(j = 0; j < matrix[i].size(); j++) {
                mini = min(mini, matrix[i][j]);
            }
            s1.insert(mini);
        }

        for(j = 0; j < matrix[0].size(); j++) {
            maxi = INT_MIN;
            for(i = 0; i < n; i++) {
                maxi = max(maxi, matrix[i][j]);
            }
            s2.insert(maxi);
        }

        for(int val : s1) {
            if(s2.find(val) != s2.end()) {
                res.push_back(val);
            }
        }
        return res;
    }
};