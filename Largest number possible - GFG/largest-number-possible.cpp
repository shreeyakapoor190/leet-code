// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if(S==0 && N>1)
            return "-1";
        if(N*9<S)
            return "-1";
        string r;
        int c=0,n=0,i,rem=0;
        n= S/9;
        rem= S%9;
        // cout<<rem<<endl;
        
        for(i=0;i<n;i++)
        {
            c++;
            r+='9';
        }
        if(rem>0)
        {
            c++;
            r+= to_string(rem);
        }
        while(c<N)
        {
            c++;
            r+='0';
        }
        return r;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends