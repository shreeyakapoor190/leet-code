// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a, a+n);
        int i=0;
        while(k>0)
        {
            if(a[i]<0)
            {
                a[i]= -a[i];
                // cout<<a[i];
                // if(flag==0)
                    i++;
            }
            else if(a[i]>0)
            {
                sort(a, a+n);
                i=0;
                break;
                // a[i]= -a[i];
                // flag= 1;
                
            }
            k--;
        }
        long long int sum=0;
        for(i=0; i<n; i++)
        {
            sum+=a[i];
        }
        if(k%2!=0)
        {
            sum-= 2*a[0];
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends