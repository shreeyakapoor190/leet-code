class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> result;
        vector<int>res;
        
            int c=0;
            for(c=0; c<matrix[0].size(); c++)
            {
                for(int i=0;i<matrix.size(); i++)
                {
                    res.push_back(matrix[i][c]);
                }
                // c++;
                result.push_back(res);
            res.clear();
            }
        return result;
    }
};