class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> r;
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
               r.push_back(matrix[i][j]); 
            }
        }
        sort(r.begin(), r.end());
        return r[k-1];
    }
};