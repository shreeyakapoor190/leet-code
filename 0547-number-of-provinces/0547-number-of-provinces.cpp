#include <vector>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        // first we will convert adjacency matrix to adjacency list
        int n = isConnected.size();
        vector<vector<int>> adjList(n);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j]) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        int count = 0;
        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                count++;
                dfsTraversal(i, adjList, visited);
            }
        }

        return count;
    }

    void dfsTraversal(int node, vector<vector<int>>& adjList, vector<int>& visited) {
        visited[node] = 1;
        for (auto x : adjList[node]) {
            if (!visited[x]) {
                dfsTraversal(x, adjList, visited);
            }
        }
    }
};
