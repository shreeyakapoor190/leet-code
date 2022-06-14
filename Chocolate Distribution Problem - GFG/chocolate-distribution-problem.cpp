// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long i, diff=0, mindiff=INT_MAX;
    // cout<<max<<min<<endl;
    for(i=0; i+m-1<n; i++)
    {
        diff= a[i+m-1]-a[i];
        if(diff<mindiff)
        {
            mindiff= diff;
        }
    }
    // if(a[m-1]==a[m])
    // {
    //     min=a[1];
    //     max=a[m];
    // }
    return mindiff;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends