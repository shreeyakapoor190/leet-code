// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<vector<int>> res;
        vector<int> r;
        solve(grid, res, r, n,m, 0, 0);
        return res;
    }
    void solve(vector<vector<int>> &grid, vector<vector<int>> &res, vector<int> r,int n, int m, int i, int j)
    {
        if(i>=n || j>=m)
        {
           return;
        }
        r.push_back(grid[i][j]);
        if(i==n-1 && j==m-1)
        {
            res.push_back(r);
            return;
        }
        solve(grid, res, r, n, m, i+1, j);
        solve(grid, res, r, n, m, i, j+1);
        r.pop_back();
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends