// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    // public:
    // int Maximize(int a[],int n)
    // {
    //     // Complete the function
        
    //     sort(a, a+n);
    //     int m= 1e9+7;
    //     long long int pdt=0;
    //     for(int i=0; i<n ;i++)
    //     {
    //         pdt =(pdt + ((long long int)a[i]*i));
    //         pdt=pdt%m;
    //     }
        
    //     return pdt;
    // }
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
          int m=1e9+7;
       sort(a,a+n);
       long long int p=0;
       for(int i=0;i<n;i++) {
           p=p+((long long int)a[i]*i);
           p=p%m;
       }
       return p;
    }
};

// { Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  // } Driver Code Ends