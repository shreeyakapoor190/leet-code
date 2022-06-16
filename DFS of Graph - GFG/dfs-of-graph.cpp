// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V];
        for(int i=0; i<V; i++)
        {
            vis[i]=0;
        }
        vector<int> res;
        DFS(adj, vis, res, 0);
        return res;
    }
    void DFS(vector<int>adj[], int vis[], vector<int>& res, int v)
    {
        vis[v]= 1;
        res.push_back(v);
        for(auto i:adj[v])
        {
            if(!vis[i])
            {
                DFS(adj, vis, res, i);
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends