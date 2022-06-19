// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> res;
		    string r;
		    vector<int> visit;
		    map<string, int> m;
		    visit.resize(S.length(), 0);
		    solve(S, r, res, 0, visit, m);
		    return res;
		}
		void solve(string S, string r, vector<string> &res, int i, vector<int> visit, map<string, int> &m)
		{
		    if(r.length()==S.length())
		    {
		      //  cout<<r<<"  ";
		      if(m.find(r)==m.end())
		      {
		          m[r]++;
		          res.push_back(r);
		          sort(res.begin(), res.end());
		      }
		      return;
		    }
		    for(int i=0; i<S.length(); i++)
		    {
		        if(visit[i]==0)
		        {
		            r.push_back(S[i]);
		            
		            visit[i]++;
    		        solve(S, r, res, i+1, visit, m);
    		        r.pop_back();
    		        visit[i]--;
		        }
		        
		    }
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends