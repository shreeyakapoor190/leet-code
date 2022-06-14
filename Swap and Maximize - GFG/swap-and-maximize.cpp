// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n);
    int i, sum=0;
    vector<int> a;
    for(i=0; i<n/2; i++)
    {
        a.push_back(arr[i]);
        a.push_back(arr[n-i-1]);
    }
    if(n%2!=0)
        a.push_back(arr[n/2]);
    for(i=0 ;i<n-1; i++)
    {
        sum+= abs(a[i]-a[i+1]);
    }
    sum+= abs(a[n-1]- a[0]);
    return sum;
}